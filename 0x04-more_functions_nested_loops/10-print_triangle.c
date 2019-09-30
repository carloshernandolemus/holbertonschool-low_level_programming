#include "holberton.h"
/**
 * print_triangle - Function of print triangle
 * @size : Size of triangle
 * Return: Return function
 */
void print_triangle(int size)
{
	int var1, var2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (var1 = 1; var1 <= size; var1++)
	{
		for (var2 = 1; var2 <= size; var2++)
		{
			if (var2 <= size - var1)
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
}
