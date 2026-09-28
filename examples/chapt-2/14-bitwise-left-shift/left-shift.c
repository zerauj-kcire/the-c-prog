#include <stdio.h>

int main(){
	int n;
	n = 3; // = 11
	int m;
	m = 2; // + 00
	// n << m = 11 + 00 = 1100
	printf("%d\n", n << m);
	printf("%d\n", n >> 1);
	return 0;
}
