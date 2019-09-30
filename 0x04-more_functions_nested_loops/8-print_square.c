#include "holberton.h"
/**
 *print_square - Is the function
 *_putchar: Display result of variable
 *@size: Is a variable
 */
void print_square(int size)
{
	int var1;
	int var2;

	for (var1 = 0; var1 < size; var1++)
	{
		for (var2 = 0; var2 < size; var2++)
			_putchar(35);
		_putchar('\n');
	}
	if (var1 == 0)
		_putchar('\n');
}
