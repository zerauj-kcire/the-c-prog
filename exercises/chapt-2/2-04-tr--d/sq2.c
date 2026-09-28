#include <stdio.h>

#define MAX 100

void chardel(char s[], char c);
void strdel(char s[], char r[]);

int main(){
	char line[MAX], remove[MAX];
	char c;
	int i; i = 0;
	printf("line CONTENTS:\n");
	while ((c = getchar()) != EOF && c != '\n'){
		line[i++] = c;
	}
	line[i] = '\0';
	printf("characters to delete in CONTENTS: ");
	i = 0;
	while ((c = getchar()) != EOF && c != '\n'){
		remove[i++] = c;
	}
	remove[i] = '\0';
	strdel(line,remove);
	for (i = 0; line[i] != '\0'; ++i){
		printf("%c", line[i]);
	}
	return 0;
}

void chardel(char s[], char c){
	int i,j;
	for (i = j = 0 ; s[i] != '\0'; ++i) {
		if (s[i] != c){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
}

void strdel(char s[], char r[]){
	int i;
	for (i = 0 ; r[i] != '\0'; ++i) {
		chardel(s, r[i]);
	}
}
