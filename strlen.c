/* strlen1: return length og s */
int strlen1(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}
