#include <stdio.h>

#define MAX 30
unsigned long int next = 1;

int rand(void);
void srand(unsigned int s);

int main(){
	int i;
	for (i=0;i<MAX;++i){
		srand(i);
		printf("%u\n", rand());
	}
	return 0;
}

int rand(void){
	next = next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}

void srand(unsigned int seed){
	next = seed;
}
