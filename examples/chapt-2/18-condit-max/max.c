#include <stdio.h>

int max(int a, int b);

int main(){
	int a,b;
	a = 10;
	b = 11;
	printf("MAX: %d\n", max(a,b));
	return 0;
}

int max(int a, int b){
	return (a > b) ? a : b;
}
