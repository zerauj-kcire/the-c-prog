#include <stdio.h>

#define MAX 100 /* maximum input line size */

char line[MAX];
char longest[MAX];
int max; 

int getlength(void);
void copy(void);

/* PRINT THE LONGEST INPUT LINE */
int main(){
	extern int max;
	extern char longest[];
	int len;
	max = 0;
	// use of getlength
	while ( (len = getlength() ) > 0){
		if (len > max){
			max = len; 
			copy(); // use of copy
		}
	}
	if (max > 0) printf("\n\n\nLONGEST:\n\n%s", longest);
	return 0;
}

/* READ LINE INTO s, RETURN length */
int getlength(void){
	int c,i;
	extern char line[];
	for (i = 0; i<MAX-1 && (c = getchar()) != EOF && c != '\n'; ++i) line[i] = c;
	if (c == '\n'){
		line[i] = c; 
		++i;
	}
	line[i] = '\0';
	return i;
}

/* COPY ALL CHARACTERS OF from INTO to, assuming |to| >= |from| */
void copy(void){
	extern char line[], longest[];
	int i; i=0;
	while ( (longest[i] = line[i]) != '\0') ++i;
}
