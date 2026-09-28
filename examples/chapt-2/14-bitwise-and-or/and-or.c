#include <stdio.h>

// bitwise means: logically the and operator bytewise for each of the numbers:
// that is:  
// c[i] = a[i] & b[i] for all [i].
// 1 & 1 = 1, 
// 1 & 0 = 0,
// 0 & 1 = 0,
// 0 & 0 = 0.

//analogous with the or operator: |
//analogous with the exclusive-or operator: ^

int main(){
	int n,m;
	n = 101; // 5
	m = 110; // 6
	printf("%d\n", (n & m));
	// works even without ints on binary form!!!
	printf("%d\n", (5 & 6));
	printf("%d\n", (n | m));
	printf("%d\n", (5 | 6));
	printf("%d\n", (n ^ m));
	printf("%d\n", (5 ^ 6));
	return 0;
}
