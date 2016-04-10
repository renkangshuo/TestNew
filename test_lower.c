#include <stdio.h>

int strlen1(char s[])
{
	int i;
	i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int main(int argc, const char *argv[])
{
	char s[20];
	int c;
	int i = 0;

	getline1(s);

	s[strlen1(s) - 1] = '\0';

	while (s[i] != '\0') {
		c = s[i];
		s[i] = lower(c);
		i++;
	}

	printf("The result is %s\n", s);

	return 0;
}
