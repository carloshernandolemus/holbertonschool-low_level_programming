#include "holberton.h"
/**
 *puts2 - Print somethings characters
 *@str: String variable
 *Return: Return value
 */
void puts2(char *str)
{
	int var1;

	var1 = 0;
	while (str[var1] != '\0')
	{
		if (var1 % 2 == 0)
		{
			_putchar(str[var1]);
		}
		var1++;
	}
	_putchar('\n');
}
