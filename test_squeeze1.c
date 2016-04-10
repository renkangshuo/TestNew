#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s1[20];
	char s2[20];

	printf("Input s1: ");
	getline1(s1, 20);
	printf("Input s2: ");
	getline1(s2, 20);

	squeeze1(s1, s2);

	printf("The result is %s\n", s1);
	return 0;
}
