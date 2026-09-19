#include<stdio.h>

#define LOW 0
#define UPP 300
#define STP 20

int main(){
	int fah;
	for (fah = 0; fah <= UPP; fah = fah + STP)
		printf("%3d\t%6.1f\n", fah, (5.0/9.0) * (fah-32.0));
}
