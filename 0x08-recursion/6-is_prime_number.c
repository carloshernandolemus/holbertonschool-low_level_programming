#include "holberton.h"
/**
 * prime_recu - Function print prime number
 * @n: Integer 1
 * @i: Integer 2
 * Return: Return recursive function
 */
int prime_recu(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (i % n == 0)
	{
		return (0);
	}
	return (prime_recu(n + 1, i));
}
/**
 * is_prime_number - Recursive function
 * @n: Integer n
 * Return: Return the value
 */
int is_prime_number(int n)
{
	int var1 = 2;

	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime_recu(var1, n));
}
