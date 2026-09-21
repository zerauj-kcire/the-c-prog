#include <stdio.h>

int main(){
	putchar(0);
	putchar(33);
	printf("chal\0es");
	// obviously the compiler will warning this
	return 0;
}
