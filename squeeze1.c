/* sqeeze1: */
void squeeze1(char s1[], char s2[])
{
	int i, j;
	i = j = 0;
	int k = 0;
#if 0
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] != s2[j])
			{
				s1[k] = s1[i];
			}
		}
			k++;
	}
#endif
	for (j = 0; s2[j] != '\0'; j++)
	{
		k = 0;
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[j])
			{
				s1[k] = s1[i];
				k++;
			}
		}
		i = k;
		s1[k] = '\0';

	}
}
