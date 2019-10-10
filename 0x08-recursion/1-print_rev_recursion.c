#include "holberton.h"
/**
 *_print_rev_recursion - This is the recursion function of change
 *@s: This is a pointer of char
 *Return: Return value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
