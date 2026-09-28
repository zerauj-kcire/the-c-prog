#include <stdio.h>

#define LEN 8

int main(){
	int c;
	int i;
	int rem;
	for (i = 0 ; (c = getchar()) != EOF ; ++i){
		if (c == '\t'){
			rem = LEN - (i % LEN);
			for (int j=0 ; j<rem; ++j) printf(" ");
		}
		else if (c == '\n'){
			i = 0;
			printf("\n");
		}
		else{
			printf("%c", c);
		}
	}
	return 0;
}
