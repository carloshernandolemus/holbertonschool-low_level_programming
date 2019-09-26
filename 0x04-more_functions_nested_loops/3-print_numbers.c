#include "holberton.h"
/**
 *print_numbers - Is the function
 *_putchar: Display result of variable
 */
void print_numbers(void)
{
	int var1;

	for (var1 = '0'; var1 <= '9'; var1++)
		_putchar(var1);
	_putchar('\n');
}
