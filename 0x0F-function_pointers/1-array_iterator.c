#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Function of a pointer
 * @array: The first input
 * @size: The second input
 * @action: The pointer function
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
