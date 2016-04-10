#include <stdio.h>

int main(int argc, const char *argv[])
{
	char to[20];
	char *from = "abcdefghijk";

	copy(to, from);

	printf("%s\n", to);
	printf("Done!\n");
	return 0;
}
