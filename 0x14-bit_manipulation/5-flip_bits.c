#include<stdio.h>
#include "holberton.h"
/**
 *flip_bits - Number of bits to flip
 *@n: Unsigned long int start number
 *@m: Unsigned long int final number,
 *Return: 1 if it works or -1 if it does not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var1;
	int i = 0;

	var1 = n ^ m;
	while (var1)
	{
		if (var1 & 1)
			var2++;

		var1 = var1 >> 1;
	}

	return (var2);
}
