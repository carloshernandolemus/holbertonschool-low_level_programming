#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Sum of a and b.
 * @a: Input
 * @b: Input
 * Return: Output
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Difference of a and b.
 * @a: Input
 * @b: Input
 * Return: Output
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Product of a and b.
 * @a: Input
 * @b: Input
 * Return: Output
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of a and b.
 * @a: Input
 * @b: Input
 * Return: Output
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division of a and b.
 * @a: input
 * @b: input
 * Return: output
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
