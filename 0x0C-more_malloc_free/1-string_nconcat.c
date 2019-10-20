#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - Function for concatenates
 *@s1: String location memory
 *@s2: Concatenate string
 *@n: Bytes concatenate string
 *Return: Return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int var1 = 0;
	unsigned int var2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[var1] != 0)
	{
		var1++;
	}
	str = malloc((var1 + n + 1) * (sizeof(char)));
	if (str == NULL)
	{
		return (NULL);
	}
	var1 = var2 = 0;
	while (s1[var1] != 0)
	{
		str[var1] = s1[var1];
		var1++;
	}
	while (var2 < n && s2[var2] != 0)
	{
		str[var1] = s2[var2];
		var1++, var2++;
	}
	str[var1] = '\0';
	return (str);
}
