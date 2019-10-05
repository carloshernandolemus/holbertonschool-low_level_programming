#include "holberton.h"
/**
 *string_toupper - This is the function to change letters
 *@s: This is the variable char
 *Return: return value
 */
char *string_toupper(char *s)
{
	int var1;

	var1 = 0;
	while (s[var1] != '\0')
	{
		var1++;
		if (s[var1] >= 97 && s[var1] <= 122)
		{
			s[var1] = s[var1] - 32;
		}
	}
	return (s);
}
