#include "holberton.h"
/**
 *is_palindrome - Check strings if is palindrome
 *@s: Value
 *Return: Integer
 */
int is_palindrome(char *s)
{
	return (_value_palin(s, 0));
}
/**
 *sizestr - Check the size of a stringe
 *@s: String
 *Return: Integer
 */
int sizestr(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + sizestr(s + 1));
}
/**
 *_value_palin - makes recursion
 *@s: Value
 *@a: Integer
 *Return: Return integer
 */

int _value_palin(char *s, int a)
{
	int var1;

	var1 = sizestr(s) - 1;
	if (s[a] != s[var1 - a])
	{
		return (0);
	}
	else
	{
		_value_palin(s, a + 1);
		return (1);
	}
}
