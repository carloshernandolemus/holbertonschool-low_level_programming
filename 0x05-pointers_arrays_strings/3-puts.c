#include "holberton.h"
/**
 *_puts - This is the function of puts
 *@str: This is a char variable
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
