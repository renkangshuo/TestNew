#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s[20];
	getline1(s, 20);
	int result = 0;
	result = htoi(s);

	printf("The reuslt is %d\n", result);
	return 0;
}
