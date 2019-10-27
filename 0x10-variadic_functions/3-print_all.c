#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function that prints anything.
 * @format: Is the constant of types of arguments to the function.
 * Return: Return 0
 */
void print_all(const char * const format, ...)
{
	va_list thor;
	unsigned int var1 = 0, var2;
	char *str;
	const char arg[] = "cifs";

	va_start(thor, format);
	while (format && format[var1])
	{
		switch (format[var1])
		{
		case 'c':
			printf("%c", va_arg(thor, int));
			break;
		case 'i':
			printf("%d", va_arg(thor, int));
			break;
		case 'f':
			printf("%f", va_arg(thor, double));
			break;
		case 's':
			str = va_arg(thor, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} var1++;
		var2 = 0;
		while (arg[var2])
		{
			if (format[var1] == arg[var2])
			{
				printf(", ");
				break;
			} var2++;
		}
	}
	va_end(thor), putchar('\n');
}
