#include <stdio.h>

int main(){
	int c;
	c = 0;
	// equivalence to (c = getchar()) != EOF && c != '\n';
	while (c != EOF){
		c = getchar();
		if (c != '\n'){
			putchar(c);
		}
		else c = EOF;
	}
	return 0;
}
