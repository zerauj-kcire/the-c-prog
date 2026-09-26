#include <stdio.h>

int main(){
	int c;                              // the first and last chararcters are:
	int i,j;                            // !       33
	int heights[94];                    // ~       126
	for (i=0;i<94;++i) heights[i]=0;   // 126 - 33 = 93
																		 
	// get the input
	while ( ( c = getchar() ) != EOF ) ++heights[c - '!'];

	// printing the hist
	printf("\n");
	for (i=0; i<94;++i){
		if (heights[i] != 0){
			putchar(i + '!');
			printf("\t");
			for (j=0;j<heights[i]; ++j) printf("|");
			printf("\n");
		}
	}
		
	return 0;
}
