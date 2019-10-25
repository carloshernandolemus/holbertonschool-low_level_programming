#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Function of a pointer
 * @array: The first input
 * @size: The second input
 * @cmp: The pointer function cpm
 * Return: Void return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int var1;

	if (array != NULL && cmp != NULL && size > 0)
	{
		var1 = 0;
		while (var1 < size)
		{
			if (cmp(array[var1]) == 1)
			{
				return (var1);
			}
			var1++;
		}
	}
	return (-1);
}
