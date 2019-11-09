#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 *clear_bit - Function that clear a bit
 *@n: unsigned number
 *@index: index
 *Return: 1 (true) -1 (false)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
	{
		return (-1);
	}
	*n = ~(1 << index) & *n;
	return (1);
}
