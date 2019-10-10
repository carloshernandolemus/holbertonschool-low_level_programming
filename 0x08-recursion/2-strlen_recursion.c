#include "holberton.h"
/**
 *_strlen_recursion - This is the recursion function of change
 *@s: This is a pointer of char
 *Return: Return value
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
