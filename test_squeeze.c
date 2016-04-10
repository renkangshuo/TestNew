#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s[20];
	printf("Input s: ");

	getline1(s, 20);
	

	squeeze(s, 'c');

	printf("The result is %s", s);
	return 0;
}
