#include <stdio.h>

int main(int argc, const char *argv[])
{
	int c;

	int num[26];

	for (int i = 0; i < 26; i++)
		num[i] = 0;

	while((c = getchar()) != EOF && c != '\n')
	{
		if (c >= 'a' && c <= 'z')
			num[c-'a']++;
	}

	for (int i = 0; i < 26; i++)
		printf(" %c is %d \n", 'a'+i, num[i]);
	return 0;
}
