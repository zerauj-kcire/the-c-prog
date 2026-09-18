#include<stdio.h>

int main(){
	int c, nlines, ntabs, nesp;
	while ( (c = getchar() ) != EOF)
	{
		if (c == '\n')
			++nlines;
		if (c == ' ')
			++nesp;
		if (c == '\t')
			++ntabs;
	}
		printf("\n");
		printf("num lines: %d\n", nlines);
		printf("num tabs: %d\n", ntabs);
		printf("num esp: %d\n", nesp);
	return 0;
}
