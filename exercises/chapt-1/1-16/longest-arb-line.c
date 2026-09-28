#include <stdio.h>

#define MAX 10 /* maximum input line size */

int getlength(char line[], int maxline);
void copy(char to[], char from[]);

/* PRINT THE LONGEST INPUT LINE */
int main(){
	char line[MAX], longest[MAX];
	int len, max; max = 0;
	// use of getlength
	while ( (len = getlength(line, MAX) ) > 0){
		if (len > max){
			max = len; 
			copy(longest,line); // use of copy
		}
	}
	if (max > 0) printf("\n\n\nLONGEST:\n\n%s", longest);
	return 0;
}

/* READ LINE INTO s, RETURN length */
int getlength(char s[], int lim){
	int c,i;
	for (i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) s[i] = c;
	if (c == '\n'){
		s[i] = c; 
		++i;
	}
	s[i] = '\0';
	return i;
}

/* COPY ALL CHARACTERS OF from INTO to, assuming |to| >= |from| */
void copy(char to[], char from[]){
	int i; i=0;
	while ( (to[i] = from[i]) != '\0') ++i;
}
