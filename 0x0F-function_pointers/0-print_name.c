#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function of a pointer
 * @name: The name pointer array
 * @f: Function to pointer
 * Return: Void return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
