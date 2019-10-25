#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int var1;
	va_list va;

	if (n == 0)
	{
		return (0);
	}
	va_start(va, n);
	for (var1 = 0; var1 < n; var1++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
}
