#include <stdio.h>

#define IN 33
#define OUT 127

int main(){
	for (int i=IN; i<=OUT; ++i){
		putchar(i);
		printf("\t%d\n", i);
	}
	return 0;
}
