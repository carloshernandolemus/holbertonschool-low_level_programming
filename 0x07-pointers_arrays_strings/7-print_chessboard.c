#include "holberton.h"
/**
 *print_chessboard - This is the function of the cheesboard
 *@a: This is a pointer of the char
 *Return: Return value
 */
void print_chessboard(char (*a)[8])
{
	int var1;
	int var2;

	for (var1 = 0; var1 < 8; var1++)
	{
		for (var2 = 0; var2 < 8; var2++)
		{
			_putchar(a[var1][var2]);
			if (var2 == 7)
			{
				_putchar('\n');
			}
		}
	}
}
