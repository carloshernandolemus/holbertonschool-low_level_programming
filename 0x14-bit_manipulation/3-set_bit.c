#include<stdio.h>
#include "holberton.h"
/**
 *set_bit - Set the value
 *@n: long int to be check
 *@index: Index to check
 *Return: 1 if it works or zero if it does not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n = 1 << index | *n;
	return (1);
}
