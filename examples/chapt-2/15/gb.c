#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(){
	unsigned input;
	int pos, num;
	printf("GIVE AN UNSIGNED INT X: ");
	while((input = getchar()) != '\n')
		;
	printf("\nGIVE A POS P: ");
	while((pos = getchar()) != '\n')
		;
	printf("\nGIVE A NUM OF BITS N: ");
	while((num = getchar()) != '\n')
		;
	printf("\ngetbits(X,P,N): %u", getbits(input,pos,num));
	return 0;
}

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0<<n);
};
