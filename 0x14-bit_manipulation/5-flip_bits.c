#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 *flip_bits - Number of bits to flip
 *@n:unsigned start number
 *@m:unsigned final number
 *Return: 1 (true) -1 (false)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var1;
	int var2 = 0;

	var1 = n ^ m;
	while (var1)
	{
		if (var1 & 1)
			var2++;

		var1 = var1 >> 1;
	}
	return (var2);
}
