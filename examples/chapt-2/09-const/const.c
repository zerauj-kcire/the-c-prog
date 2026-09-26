#include <stdio.h>

#define MAX 100

const double p = 3.14159265;
const char msg[] = "Warning!: ";

long int stoi(char s[]);

int main(){
	extern double p; // FIX ME
	extern char msg[];
	long int num, den;
	int c, i; i = 0;
	char line[MAX];
	printf("GIVE THE NUMERATOR: ");
	while ((c = getchar()) != EOF && c != '\n'){
		line[i] = c;
		++i;
	}
	num = stoi(line);
	printf("GIVE THE DENOMINATOR: ");
	while ((c = getchar()) != EOF && c != '\n'){
		line[i] = c;
		++i;
	}
	den = stoi(line);
	if (den == 0) printf("%c", msg[]);
	return 0;
}

long int stoi(int s[]){
	int i,n;
	n=0;
	for (i = 0 ; s[i] >= '0' && s[i] <= '9'; ++i) n = 10 * n + (s[i] - '0');
	return n;
}
