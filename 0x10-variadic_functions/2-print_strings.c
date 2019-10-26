#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - This is a function that print strings
 * @separator: This is the separator string
 * @n: This is the arguments numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list thor;
	unsigned int var1;
	char *var2;

	va_start(thor, n);

	for (var1 = 0; var1 < n; var1++)
	{
		var2 = va_arg(thor, char *);
		if (var2 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", var2);
		}
		if (var1 != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(thor);
	putchar('\n');
}
