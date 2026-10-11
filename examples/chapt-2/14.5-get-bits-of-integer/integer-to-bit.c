
#include <stdio.h>

#define MAX 11

int power(int n, int m);

int main(){
	int n;
	unsigned int x;
	printf ("GIVE AN UNSIGNED INTEGER: ");
	scanf("%d", &x);

	for ( int i = MAX-1 ; i>=0 ; i-- ) {
		n = power(2, i);
		if ((x & n) != 0) printf ("1");
		else printf ("0");
	}
	printf ("\n");
	return 0;
}

int power(int n, int m){ /*  n ** m  */
	int prod = 1;
	int i;
	for ( i = 0 ; i<m ; i++ ) prod *= n;
	return prod;
}
