#include<stdio.h>

int main(){
	int c;
	// interesting that is an integer!!!
	// EOF = C-d .
	while ( ( c = getchar() ) != EOF)
		putchar(c);
}
