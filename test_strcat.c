#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s1[40];
	char s2[20];

	printf("Input s1: ");
	getline1(s1, 40);
	printf("\n");
	printf("Input s2: ");
	getline1(s2, 20);
	printf("\n");

	strcat1(s1, s2);

	printf("The result is s1 %s", s1);

	return 0;
}
