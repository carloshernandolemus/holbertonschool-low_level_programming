#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Function of a pointer
 * @name: The name pointer array
 * @f: Function to pointer
 * Return: Void return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int var1;

		var1 = 0;
		while (var1 < size)
		{
			(action)(array[var1]);
			var1++;
		}
	}
}
