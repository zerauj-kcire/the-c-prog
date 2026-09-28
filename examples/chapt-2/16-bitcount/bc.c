#include <stdio.h>

int bitcount(unsigned x); // counts the number of 1s in x.

int main(){
	unsigned x; x = 511;
	printf("%d", bitcount(x));
	return 0;
}


int bitcount(unsigned x){
	int b;
	for (b = 0 ; x!= 0; x >>= 1) {
		if (x & 01) b++;
	}
	return b;
}
