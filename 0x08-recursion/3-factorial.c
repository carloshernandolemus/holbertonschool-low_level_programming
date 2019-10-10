#include "holberton.h"
/**
 * factorial - This is the recursion function for the factorial
 * @n: This is a integer variable
 * Return: Return the value
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
