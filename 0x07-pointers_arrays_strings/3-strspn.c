#include "holberton.h"
/**
 *_strspn - This is the function of change
 *@s: This is a pointer of first char
 *@accept: This is a char variable
 *Return: Return value
 */
unsigned int _strspn(char *s, char *accept)
{
	int var1 = 0;
	int var2 = 0;
	unsigned int var3 = 0;

	while (s[var1] != '\0' && s[var1] != 32)
	{
		while (accept[var2] != '\0')
		{
			if (s[var1] == accept[var2])
			{
				var3++;
			}
			var2++;
		}
		var2 = 0;
		var1++;
	}
	return (var3);
}
