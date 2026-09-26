#include <stdio.h>

#define MAX 100

int mstrlen(char s[]);

int main(){
	int c,i; i = 0;
	char s[MAX];
	while ( (c = getchar() ) != EOF){
		s[i] = c;
		++i;
	}
	printf("\nLEN: %d\n", mstrlen(s));
	return 0;
}

int mstrlen(char s[]){
	int i; i = 0;
	while (s[i] != '\0') ++i;
	return i;
}
