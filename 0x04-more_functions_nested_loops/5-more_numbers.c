#include "holberton.h"
/**
 *more_numbers - Is the function
 *_putchar: Display result of variable
 */
void more_numbers(void)
{
	int var1;
	int var2;

	for (var1 = 0; var1 <= 9; var1++)
	{
		for (var2 = 0; var2 <= 14; var2++)
		{
			if (var2 <= 14)
			{
				if (var2 > 9)
				{
					_putchar(var2 / 10 + '0');
				}
				_putchar(var2 % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
