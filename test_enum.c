#include <stdio.h>

enum months {JAN = 1, FEB, MAR, APR, JUN, JUL, AUG, SEP, OCT, NOV, DEC };


int main(int argc, const char *argv[])
{
	enum months s;
	s = DEC;
	printf("%d\n", s);
	printf("%d\n", MAR);

	return 0;
}
