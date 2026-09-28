#include <stdio.h>

#define LOW 0
#define UPP 300
#define STP 20

float fhrcel(float f);

int main(){
	int i;
	for (i = LOW; i < UPP; i = i + STP){
		printf("%d\t%6.1f\n", i, fhrcel(i));
	}
	return 0;
}

float fhrcel(float fahr){
	return (5.0 / 9.0) * (fahr - 32.0);
}
