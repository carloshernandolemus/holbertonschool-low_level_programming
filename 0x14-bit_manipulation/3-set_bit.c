#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 * set_bit - Function that sets the value of a bit
 * @n: Unsigned number
 * @index: This is the position
 * Return: The value int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int var1 = 0;

	if (index > 64)
	{
		return (-1);
	}
	var1 = 1 << index;
	*n = (*n & ~var1) | ((1 << index) & var1);
	return (1);
}
