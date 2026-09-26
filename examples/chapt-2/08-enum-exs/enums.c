#include <stdio.h>

enum escape {
	BELL = '\a',
	BACKSPACE = '\b',
	TAB = '\t',
	NEWLINE = '\n',
	VTAB = '\v',
	RETURN = '\r'
};

enum month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main(){
	enum escape e = BACKSPACE;
	char s[2];
	s[0] = 'a';
	s[1] = 'a';
	printf("%c%c%c \n", s[0], s[1], e);
	// the space is somehow important....

	enum month mbirthday = JUN;
	printf("my birthday is in: %d\n", mbirthday);
	return 0;
}
