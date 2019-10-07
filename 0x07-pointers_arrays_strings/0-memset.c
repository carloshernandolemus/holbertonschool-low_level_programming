#include "holberton.h"
/**
 *_memset - This is the function of change
 *@s: This is a pointer of first char
 *@b: This is a variable char
 *@n: This is a ui variable
 *Return: Return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int var1;

	var1 = 0;
	while (n > var1)
	{
		s[var1] = b;
		var1++;
	}
	return (s);
}
