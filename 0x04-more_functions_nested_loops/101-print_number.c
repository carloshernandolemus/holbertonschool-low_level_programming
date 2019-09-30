#include "holberton.h"
/**
 * print_number - The function print a number
 * @n : Variable int
 * Return: Not works here
 */
void print_number(int n)
{
	unsigned int var1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	var1 = n;
	if (var1 / 10)
	{
		print_number(var1 / 10);
	}
	_putchar(var1 % 10 + '0');
}
