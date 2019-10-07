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

	var1 = 0;
	while (s[var1] != '\0')
	{
		s++;
		if (s[var1] == c)
		{
			break;
		}
		var1++;
	}
	return (s);
}
