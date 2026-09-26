#include <stdio.h>

enum boolean { NO, YES };
// enum boolean { 0, 1 };

int main(){
	enum boolean t = YES;
	printf("%d", t);
	return 0;
}
