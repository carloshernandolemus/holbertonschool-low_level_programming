#include "holberton.h"
/**
 *print_number - Print the numbers with _putchar
 *@n: Number value
 *Return: Return the value
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	if (n / 10)

		print_number(n / 10);
	_putchar(n % 10 + '0');
}
