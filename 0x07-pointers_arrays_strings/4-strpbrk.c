#include "holberton.h"
/**
 *_strpbrk - This is the function of change
 *@s: This is a pointer of first char
 *@accept: This is a char variable
 *Return: Return value
 */
char *_strpbrk(char *s, char *accept)
{
	int var1 = 0;
	int var2 = 0;

	while (s[var1] != '\0' && s[var1] != 32)
	{
		while (accept[var2] != '\0')
		{
			if (s[var1] == accept[var2])
			{
				return (s + var1);

			}
			var2++;
		}
		var2 = 0;
		var1++;
	}
	return ('\0');
}
