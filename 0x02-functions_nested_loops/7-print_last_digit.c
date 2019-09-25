#include "holberton.h"
/**
 *print_last_digit - This is the logical function prototype
 *@var1: Is the variable
 *Description: Display the result of the function
 *Section  header: It's header or librery
 *Return: Display return
 */

int print_last_digit(int var1)
{
	int var2 = var1 % 10;

	if (var1 < 0)
	{
		var2 *= -1;
	}
	_putchar(var2 + '0');
	return (var2);
}
