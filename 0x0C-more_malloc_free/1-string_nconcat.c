#include"holberton.h"
#include<stdlib.h>
/**
 *string_nconcat - Function for concatenates
 *@s1: String location memory
 *@s2: Concatenate string
 *@n: Bytes concatenate string
 *Return: Return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int var1;
	unsigned int var2;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	for (var1 = 0; s1[var1] != '\0'; var1++)

	str = malloc(sizeof(char) * (var1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (var2 = 0; var2 < var1; var2++)
	{
		str[var2] = s1[var2];

	}
	for (; var2 < (var1 + n) && s2[var2 - var1] != '\0'; var2++)
	{
		str[var2] = s2[var2 - var1];
	}
	str[var2] = '\0';
	return (str);
}
