#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 * get_bit - Returns the value of a bit
 * @n: Unsigned number
 * @index: Unsigned index
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (((n >> index) & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
