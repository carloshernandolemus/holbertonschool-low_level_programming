#include "holberton.h"
/**
 *jack_bauer - This is the logical function prototype
 *Description: Display the result of the function
 *Section  header: It's header or librery
 *Return: Display return
 */

void jack_bauer(void)
{
	int var1, var2;

	for (var1 = 0; var1 <= 23; var1++)
		{
			for (var2 = 0; var2 <= 59; var2++)
				{
					_putchar(var1 / 10 + '0');
					_putchar(var1 % 10 + '0');
					_putchar(':');
					_putchar(var2 / 10 + '0');
					_putchar(var2 % 10 + '0');
					_putchar('\n');
				}
		}
}
