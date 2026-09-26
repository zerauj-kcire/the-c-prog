#include <stdio.h>
#include <limits.h>

#define MAX 100

long int stoi(char s[]);

int main(){
	int c,i; i = 0;
	printf("put an integer between: %ld and %ld.\n", LONG_MIN,LONG_MAX);
	char line[MAX];
	while ((c = getchar() ) != EOF && c != '\n'){
		line[i] = c;
		++i;
	}
	printf("\nINT: %ld\n", stoi(line)); 
	return 0;
}

long int stoi(char s[]){
	long int i,n;
	n = 0;
	for (i = 0 ; s[i] >= '0' && s[i] <= '9'; ++i) {
		n = 10 * n + (s[i] - '0');
	}
	return n;
}
