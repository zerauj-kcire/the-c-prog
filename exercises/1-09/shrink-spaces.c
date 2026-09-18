#include <stdio.h>

int main(){
	int c, pc; // character and previous character
	while ( (c = getchar() ) != EOF)
	{
		if(c == ' ' && pc == ' ')
			;
		else
			putchar(c);
		pc = c;
	}
	return 0;
}
