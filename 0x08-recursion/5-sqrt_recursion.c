#include "holberton.h"
/**
 * sqrt_recu - Function that returns the natural square root of a number
 * @n: Integer 1
 * @i: Integer 2
 * Return: Return sqrt_recu
 */
int sqrt_recu(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recu(n, i + 1));
}

/**
 * _sqrt_recursion - Second function
 * @n: Integer n
 * Return: Return sqrt_recu -
 */

int _sqrt_recursion(int n)
{
	int i = 0;
	return (sqrt_recu(n, i));
}
