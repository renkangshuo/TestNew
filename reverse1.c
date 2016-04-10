#include <stdio.h>

void reverse(char s[])
{
	int c, j, i;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {

		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int main(int argc, const char *argv[])
{
	char s[20];

	printf("Input s : ");
	getline1(s, 20);
	printf("%s ", s);

	reverse(s);
	printf("After reverse: ");
	printf("%s", s);
	return 0;
}
