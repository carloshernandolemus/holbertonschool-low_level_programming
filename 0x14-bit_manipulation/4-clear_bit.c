#include<stdio.h>
#include "holberton.h"
/**
 *clear_bit - Sets the value of a bit to 0
 *@n: Unsigned long int
 *@index: Index to check
 *Return: 1 if it works or -1 if it does not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);

}
