#include <stdio.h>

#define MAX 11

int power(int n, int m);
void bitwise(int k);

int main(void){

	int a,b;
	int and, or, xor, left, right, comp;

	printf ("ENTER A: ");
	scanf("%d", &a);
	printf ("ENTER B: ");
	scanf("%d", &b);

	printf ("a = \t"); bitwise(a); printf ("\n");
	printf ("b = \t"); bitwise(b); printf ("\n");
	printf ("\n");

	and = a & b;
	printf ("a & b = "); bitwise(and); printf (" = %d\n",and);

	or = a | b;
	printf ("a | b = "); bitwise(or); printf (" = %d\n",or);

	xor = a ^ b;
	printf ("a ^ b = "); bitwise(xor); printf (" = %d\n",xor);

	left = a << b;
	printf ("a << b = "); bitwise(left); printf (" = %d\n",left);

	right = a >> b;
	printf ("a >> b = "); bitwise(right); printf (" = %d\n",right);

	comp = ~a;
	printf ("~a = "); bitwise(comp); printf (" = %d\n",comp);

	return 0;
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
}
