#include <stdio.h>

int main(void){

	int c,i;
	int nw, no, ndigit[10];

	nw = no = 0;
	for ( i=0 ; i<10 ; i++ ) ndigit[i] = 0;

	printf("ENTER TEXT:\n");

	while ((c = getchar()) != EOF) {
		switch (c) {

			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9': 
				ndigit[c - '0']++; break;

			case ' ': case '\n': case '\t':
				nw++; break;

			default: no++;
		}
	}

	printf("\nDIGITS:\n");
	for ( i=0 ; i<10 ; i++ ) printf("%d: %d\n", i, ndigit[i]);
	printf("\nWHITESPACE: %d\nOTHER: %d\n", nw, no);

	return 0;
}
