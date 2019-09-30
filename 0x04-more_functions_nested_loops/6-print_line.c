#include "holberton.h"
/**
 *print_line - Is the function
 *_putchar: Display result of variable
 *@n: Is a variable
 */
void print_line(int n)
{
	int var1;

	if (n > 0)
	{
		for (var1 = 1; var1 <= n; var1++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
