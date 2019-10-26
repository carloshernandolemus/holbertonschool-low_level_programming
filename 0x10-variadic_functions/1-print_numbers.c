#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - This is the function that prints the numbers
 * @separator: This is the string separator
 * @n: This is the arguments numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list thor;
	unsigned int var1;

	va_start(thor, n);

	for (var1 = 0; var1 < n; var1++)
	{
		printf("%i", va_arg(thor, int));
		if (var1 != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(thor);
	printf("\n");
}
