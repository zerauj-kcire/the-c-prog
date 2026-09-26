#include <stdio.h>
#include <limits.h>

int main(){

	// lets print the HEADER of LIMITS.h
	printf("\n");
	printf("\t--- CHAR LIMITS ---\n\n");
	printf("bits in a CHAR:\t\t%d\n", CHAR_BIT);
	printf("min CHAR\t\t%d\n", CHAR_MIN);
	printf("max CHAR:\t\t%d\n", CHAR_MAX);
	printf("max UNISIGNED CHAR:\t%d\n", UCHAR_MAX);
	printf("min SIGNED CHAR\t\t%d\n", SCHAR_MIN);
	printf("max SIGNED CHAR:\t%d\n", SCHAR_MAX);
	printf("\n");
	printf("\t--- SHORT LIMITS ---\n\n");
	printf("min SHORT\t\t%d\n", SHRT_MIN);
	printf("max SHORT\t\t%d\n", SHRT_MAX);
	printf("max UNSIGNED SHORT\t%d\n", USHRT_MAX);
	printf("\n");
	printf("\t--- INT LIMITS ---\n\n");
	printf("min INT\t\t\t%d\n", INT_MIN);
	printf("max INT\t\t\t%d\n", INT_MAX);
	printf("max UNSIGNED INT\t%u\n", UINT_MAX);
	printf("\n");
	printf("\t--- LONG LIMITS ---\n\n");
	printf("min LONG\t\t%ld\n", LONG_MIN);
	printf("max LONG\t\t%ld\n", LONG_MAX);
	printf("max UNSIGNED LONG\t%lu\n", ULONG_MAX);
	printf("\n");
	return 0;
}
