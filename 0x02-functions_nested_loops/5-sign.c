#include "holberton.h"
/**
 *print_sign - This is the logical function prototype
 *@n: Is the variable
 *Description: Display the result of the function
 *Section  header: It's header or librery
 *Return: Display 1 and print + if n is greater than zero
 *if n is zero prints 0 and return 0
 *if n is less than zero print - and return -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
