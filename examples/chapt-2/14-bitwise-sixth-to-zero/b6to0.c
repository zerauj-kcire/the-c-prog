#include <stdio.h>

int main(){
	int x; x = 511; // 2 ^9 -1 = 111,111,111
									// ~077 = -64 = -2^6.
	printf("%d\n", (x & ~077));
	return 0;
}
