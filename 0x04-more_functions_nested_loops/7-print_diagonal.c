#include "holberton.h"
/**
 *print_diagonal - Is the function
 *_putchar: Display result of variable
 *@n: Is a variable
 */
void print_diagonal(int n)
{
	int var1;
	int var2;

	for (var1 = 0; var1 < n; var1++)
	{
		for (var2 = 0; var2 < var1; var2++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	if (var1 == 0)
		_putchar('\n');
}
