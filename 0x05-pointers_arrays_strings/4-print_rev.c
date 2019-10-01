#include "holberton.h"
/**
 *print_rev - This is the function of string
 *@s: This is a char variable
 *Return: Return of value
 */
void print_rev(char *s)
{
	int var1 = 0;

	while (s[var1] != '\0')
	{
		var1++;
	}
	var1--;
	while (s[var1] != '\0')
	{
		_putchar(s[var1--]);
	}
	_putchar('\n');
}
