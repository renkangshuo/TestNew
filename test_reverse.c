#include <stdio.h>

int main(int argc, const char *argv[])
{
	char s[5];
	char *p;
	p = s;
	printf("%d\n", sizeof(s));
	printf("p = %d\n", sizeof(p));

	getline1(s, sizeof(s));

	printf("s = %s\n", s);

	printf("After reverse operation\n");

	reverse(s);

	printf("%s\n", s);
	return 0;
}
