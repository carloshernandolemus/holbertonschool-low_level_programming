#include "holberton.h"
/**
 *_strchr - This is the function of change
 *@s: This is a pointer of first char
 *@c: This is a variable char 'l'
 *Return: Return value
 */
char *_strchr(char *s, char c)
{
	int var1;

	for (var1 = 0; s[var1] != '\0'; var1++)
	{
		if (s[var1] == c)
		{
			var1++;
		}
		s++;
	}
	return (s);
}
