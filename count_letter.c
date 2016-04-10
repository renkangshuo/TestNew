#include <stdio.h>

int getline1(char s[], int lim);

void letter_count( char s[])
{
	int letter[26];

	for (int j = 0; j < 26; j++)
	{
		letter[j] = 0;
	}

	for (int i = 0; i < 26; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			letter[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		printf(" %c is %d \n", 'a'+i, letter[i]);
	}

	return;
}

int main(int argc, const char *argv[])
{
	char s[40];

	printf("Input s: ");
	getline1(s, 40);

	s[strlen[s] - 1]


	letter_count( s);

	return 0;
}
