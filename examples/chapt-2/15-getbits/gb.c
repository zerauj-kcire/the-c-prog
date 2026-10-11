#include <stdio.h>

#define MAX 11

int power(int n, int m);
void bitwise(int k);
int getbits(int x, int p, int n);

int main(){
	int input;
	int pos, num;
	printf("GIVE AN UNSIGNED INT X: ");
	scanf("%d", &input);
	printf("GIVE A POS P: ");
	scanf("%d", &pos);
	printf("GIVE A NUM OF BITS N: ");
	scanf("%d", &num);
	printf ("X = ");bitwise(input);
	int g;
	g = getbits(input,pos,num);
	printf("getbits(X,P,N): %u\n", g);
	printf ("GB= "); bitwise(g);
	return 0;
}

/*  get the bits [p,p+n] from x  */
int getbits(int x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0<<n);
}

int power(int n, int m){
	int prod = 1;
	int i;
	for ( i = 0 ; i<m ; i++ ) prod *= n;
	return prod;
}

void bitwise(int x) {
	int i;
	int n;
	for ( i = MAX - 1 ; i>=0 ; i-- ) {
		n = power(2,i);
		if ((x&n) != 0) printf ("1");
		else printf ("0");
	}
	printf ("\n");
}
