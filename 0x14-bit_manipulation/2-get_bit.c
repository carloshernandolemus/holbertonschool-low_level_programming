#include<stdio.h>
#include "holberton.h"
/**
 *get_bit - Get the bit
 *@n: unsigned int to be evaluated
 *@index: Index to check
 *Return: bit in the index or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int var1 = 0;

	while (n)
	{
		if (var1 == index)
			return (n % 2);

		n = n / 2;
		var1++;
	}
	if (index > var1 && index < 63)
		return (0);

	return (-1);
}
