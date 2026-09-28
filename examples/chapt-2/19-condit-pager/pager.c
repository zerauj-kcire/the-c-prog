#include <stdio.h>

#define MAX 100
#define n 25

int main(){
	char truth[] = "baba is you, is the western civilization peak";
	int i;
	for (i = 0 ; truth[i] != '\0' && truth[i] != EOF; i++) {
		printf("%c%c", truth[i], (i % 10 == 9 || i == n-1) ? '\n' : ' ');
	}
	return 0;
}
