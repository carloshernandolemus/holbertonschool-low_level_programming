#include "holberton.h"
/**
 * _pow_recursion - This is the recursion function
 * @x: Integer variable
 * @y: Integer variable
 * Return: Return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
