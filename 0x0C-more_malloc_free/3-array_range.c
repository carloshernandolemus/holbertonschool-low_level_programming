#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Function that creates an array of integers
 * @min: Integer array min
 * @max: Integer array max
 * Return: Return a pointer
 */
int *array_range(int min, int max)
{
	int *str;
	int var1;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	str = malloc(size * (sizeof(int)));
	if (str == NULL)
	{
		return (NULL);
	}
	for (var1 = 0; var1 < size && min <= max; var1++)
	{
		str[var1] = min;
		min++;
	}
	return (str);
}
