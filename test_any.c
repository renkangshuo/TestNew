#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s1[20];
	char s2[20];

	printf("Input s1: ");
	getline1(s1, 20);
	printf("\n");
	printf("Input s2: ");
	getline1(s2, 20);
	printf("\n");

	int location = 0;
	location = any(s1, s2);

	printf("The location is %d\n", location);

	return 0;
}
