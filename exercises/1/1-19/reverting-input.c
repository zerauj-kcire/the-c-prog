#include <stdio.h>

#define MAX 100

int length(char s[]);
void reverse(char s[]);

int main(){
	char c;
	char line[MAX];
	int i; i=0;
	while ( i < MAX && (c = getchar() ) != EOF){
		if (c != '\n'){
			line[i] = c;
			++i;
		}
		else {
			line[i] = '\0';
			reverse(line);
			i=0;
		}
	}
	return 0;
}

int length(char s[]){
	int i;
	for (i=0; s[i] != '\0'; ++i)
		;
	return i;
}

void reverse(char s[]){
	int len; len = length(s);
	for (int i=1; i<len+1; ++i){
		printf("%c", s[len-i]);
	}
	printf("\n");
}
