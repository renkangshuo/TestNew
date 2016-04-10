#include <stdio.h>

enum loop { NO, YES };
enum loop okloop = YES;

int main(int argc, const char *argv[])
{
	char s[20];
	int lim =20;
	int i = 0;
	int c;

	while (okloop == YES)
		if (i >= lim - 1)   /* outside of valid range ? */
			okloop = NO;
		else if ((c = getchar()) == '\n')
			okloop = NO;
		else if (c == EOF)
			okloop = NO;  /* End of the file ? */
		else {
			s[i] = c;
			++i;
		}

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	printf("%s", s);

	return 0;
}
