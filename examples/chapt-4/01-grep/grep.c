#include <stdio.h>

#define MAX 1000

int mygetline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(void){

	char line[MAX];
	int found = 0;

	printf ("PUT YOUR CONTENT:\n");
	while (mygetline(line, MAX) > 0) if (strindex(line, pattern) >= 0){
		printf ("%s", line);
		found++;
	}
	return found;
}

/*  put the stream of input into the string s and returns the length of s */
int mygetline(char s[], int lim){
	int c,i;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF  && c != '\n') s[i++] = c;
	if (c == '\n') s[i++] = c;
	s[i] = '\0';
	return i;
}

/*  return the index of t in s  (retunr -1 if there is none) */
int strindex(char s[], char t[]){
	int i,j,k;
	for ( i = 0 ; s[i] != '\0' ; i++ ) {
		for ( j=i, k=0 ; t[k] != '\0' && s[j] == t[k] ; j++, k++ ) ;
		if (k > 0 && t[k] == '\0') return i;
	}
	return -1;
}

