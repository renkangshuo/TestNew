/* Reverse: Reverse string s */
void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0') /* find the end of the string s */
		++i;
	--i; // back off from '\0'
	if (s[i] == '\n')
		--i; // leave newline in place
	j = 0; 	// beginning of new string s
	while (j < i) {
		temp = s[j];
		s[j] = s[i];   // swap the characters
		s[i] = temp;
		--i;
		++j;
	}
}
