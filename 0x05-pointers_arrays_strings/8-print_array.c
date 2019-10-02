#include "holberton.h"
#include <stdio.h>
/**
 *print_array - Prints the arrays
 *@a: Array variable
 *@n: Size of string
 *Return: Return variable string
 */
void print_array(int *a, int n)
{
	int var1;

	for (var1 = 0; var1 < n; var1++)
	{
		if (var1 != (n - 1))
		{
			printf("%i, ", a[var1]);
		}
		else
		{
			printf("%i", a[var1]);
		}
	}
	printf("\n");
}
