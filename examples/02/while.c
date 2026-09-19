#include<stdio.h>

int main (){
	int fahr, cel;
	int low, upp, step;

	low = 0;
	upp = 300;
	step = 20;

	fahr = low;
	while (fahr <= upp) {
		cel = 5 * (fahr -32) / 9;
		printf("%d\t%d\n", fahr, cel);
		fahr = fahr + step;
	}
}
