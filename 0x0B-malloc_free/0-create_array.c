#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - The main function of array and integer
 *@size: Size of array
 *@c: This is te char variable
 *Return: Return of value
 */
char *create_array(unsigned int size, char c)
{
	unsigned int var1 = 0;
	char *var2;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		var2 = malloc(size * sizeof(c));
	}
	if (var2 == 0)
	{
		return (0);
	}
	for (var1 = 0; var1 < size; var1++)
	{
		var2[var1] = c;
	}
	return (var2);
}
