#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);

/* remove all comments from a valid C program */
int main(int argc, const char *argv[])
{
	int c, d;

	while ((c = getchar()) != EOF)
		rcomment(c);
	
	return 0;
}

/* rcomment: read each character, remove the comments */
void rcomment(int c)
{
	int d;

	if (c == '/')
		if ((d = getchar()) == '*')
			in_comment();
		else if (d == '/') {
			putchar(c);
			rcomment(d);
		} else {
			putchar(c);
			putchar(d);
		}
	else if (c == '\'' || c == '"')
		echo_quote(c); /* quote begins */
	else
		putchar(c); /* not a comment */
}

/* in_comment: inside of a valid comment */
void in_comment(void)
{
	int c, d;
	c = getchar();  /* prev character */
	d = getchar();  /* curr character */
	while (c != '*' || d != '/') {
		c = d;
		d = getchar();
	}
}

/* echo_quote: echo characters within quotes
 */
void echo_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c) {

		putchar(d);
		if (d == '\\')
			putchar(getchar()); /* ignore escape seq */
	}
	putchar(d);
}
