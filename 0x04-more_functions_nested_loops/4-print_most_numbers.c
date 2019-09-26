#include "holberton.h"
/**
 *print_most_numbers - Is the function
 *_putchar: Display result of variable
 */
void print_most_numbers(void)
{
	int var1;

	for (var1 = '0'; var1 <= '9'; var1++)
		if (var1 != '2' && var1 != '4')
		{
			_putchar(var1);
		}
	_putchar('\n');
}
