#include <stdio.h>

#define MAX 100

void squeeze(char s[], int c);

int main(){
	char line[MAX];
	int p;
	int c, i; i = 0;
	printf("line CONTENTS:\n");
	while ((c = getchar()) != EOF && c != '\n'){
		line[i++] = c;
	}
	line[i] = '\0';
	printf("char to delete in CONTENTS: ");
	p = getchar();
	squeeze(line,p);
	for (i = 0; line[i] != '\0'; ++i){
		printf("%c", line[i]);
	}
	return 0;
}

void squeeze(char s[], int c){
	int i,j;
	for (i = j = 0; s[i] != '\0'; ++i){
		if (s[i] != c) s[j++] = s[i];
	}
	s[j] = '\0';
}
