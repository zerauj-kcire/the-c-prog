#include <stdio.h>

#define MAX 100

// use of the STOI function of the previous examples.
long int stoi(char s[]);

int main(void){
	long int num;
	int c, i;

	printf("PUT AN INTEGER: ");
	char line[MAX];
	while ((c = getchar() ) != EOF && c != '\n'){
		line[i] = c;
		++i;
	}
	num = stoi(line);

	printf("You have %ld item%s\n", num, (num != 1) ? "s" : "");
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
