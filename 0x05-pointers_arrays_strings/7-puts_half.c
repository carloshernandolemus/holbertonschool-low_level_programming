#include "holberton.h"
/**
 *puts_half - Print the last par of the numbers
 *@str: The varibale string
 *Return:An string of character
 */
void puts_half(char *str)
{
	int var1;
	int var2;
	int var3;

	var1 = 0;
	while (str[var1] != '\0')
	{
		var1++;
	}
	if (var1 % 2 == 0)
	{
		var2 = var1 / 2;
	}
	else
	{
		var2 = (var1 / 2) + 1;
	}
	for (var3 = var2; var3 < var1; var3++)
	{
		_putchar(str[var3]);
	}
	_putchar('\n');
}
