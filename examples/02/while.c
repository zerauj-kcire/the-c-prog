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

// 0       -17
// 20      -6
// 40      4
// 60      15
// 80      26
// 100     37
// 120     48
// 140     60
// 160     71
// 180     82
// 200     93
// 220     104
// 240     115
// 260     126
// 280     137
// 300     148
