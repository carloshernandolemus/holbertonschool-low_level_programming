#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - This is the function of change
 *@s: This is a pointer of first char
 *@c: This is a variable char 'l'
 *Return: Return value
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
		return (NULL);
		}
	}
	return (s);
}
