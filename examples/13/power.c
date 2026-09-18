#include <stdio.h>

// declaration
int power(int m, int n);

// execution
int main(){
	int i;

	for (i = 0; i<10; ++i){
		printf("%d\t%d\t%d\n", i, power(2,i), power(-3,i));
	}
	return 0;
}

// definition :c
int power(int base, int exp){
	int i, p;
	p=1;
	for (i=1;i<=exp;++i)
		p = p * base;
	return p;
}
