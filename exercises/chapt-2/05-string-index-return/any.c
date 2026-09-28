#include <stdio.h>

#define MAX 100

int mindex(char l[], char c);
void any(char l[], char f[]);

int main(){

	int i; i = 0;
	char c, line[MAX], find[MAX];

	printf("GIVE ME THE CONTENTS:\n");
	while ((c = getchar()) != EOF && c != '\n') line[i++] = c;
	line[i] = '\0';

	i = 0;
	printf("GIVE ME THE CHARS TO IDENTIFY THEIR INDEX IN CONTENTS:\n");
	while ((c = getchar()) != EOF && c != '\n') find[i++] = c;
	find[i] = '\0';

	any(line,find);
	return 0;
}

int mindex(char list[], char c){
	int i = 0;
	while (list[i] != '\0' && list[i] != c) ++i;
	return i;
}

void any(char l[], char f[]){
	int i; i = 0;
	while(f[i] != '\0'){
		printf("%c:\t%d\n", f[i], mindex(l,f[i]));
		i++;
	}
}
