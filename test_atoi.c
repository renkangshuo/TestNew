#include <stdio.h>

int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}

int main(int argc, const char *argv[])
{
	char s[20];

	getline1(s);
	int result = atoi(s);

	printf("The result is %d\n", result);

	return 0;
}
