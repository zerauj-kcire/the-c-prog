#include<stdio.h>

#define LOW 0
#define UPP 300
#define STP 20

int main(){
	int fah;
	for (fah = 0; fah <= UPP; fah = fah + STP)
		printf("%3d\t%6.1f\n", fah, (5.0/9.0) * (fah-32.0));
}

  // 0      -17.8
 // 20       -6.7
 // 40        4.4
 // 60       15.6
 // 80       26.7
// 100       37.8
// 120       48.9
// 140       60.0
// 160       71.1
// 180       82.2
// 200       93.3
// 220      104.4
// 240      115.6
// 260      126.7
// 280      137.8
// 300      148.9
