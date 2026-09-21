#include <stdio.h>

#define MAX 100

int main(){

	int c;
	int heights[MAX]; for (int i=0;i<MAX;++i) heights[i]=0;
	int nw; nw=0;
	int length; length = 0;

	while ( (c = getchar()) != EOF ){
		if (c == '\n' || c == ' ' || c == '\n'){
			++nw;
			heights[nw-1] = length;
			length=0;
		}
		else ++length;
	}
	heights[nw] = length;

	printf("\n");
	for (int i=0;i<MAX;i++){
		if (heights[i] != 0){
			printf("%d\t", i);
			for (int j=0; j<heights[i]; ++j) printf("|");
			printf("\n");
		}
	}

	return 0;
}
