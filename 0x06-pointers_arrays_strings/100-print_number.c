#include "holberton.h"
/**
 *print_number - Print the numbers with _putchar
 *@n: Number value
 *Return: Return the value
 */
void print_number(int n)
{
	unsigned int var1 = n;

	if (n < 0)
	{
		_putchar(45);
		var1 = -var1;
	}
	if (var1 / 10)
	{
		print_number(var1 / 10);
	}
	_putchar(var1 % 10 + '0');
}
