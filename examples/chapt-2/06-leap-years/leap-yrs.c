#include <stdio.h>

#define LEAP 1

int main(){
	int days[31 + 28 + LEAP + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31];
	days[365] = 1;
	printf("%d", days[365]);
	return 0;
}
