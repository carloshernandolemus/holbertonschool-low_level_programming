#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 * binary_to_uint - Function that convert from binary to unsigned int.
 * @b: Binary string
 * Return: Decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int var1;
	int len, bs;

	if (!b)
	{
		return (0);
	}
	var1 = 0;
	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bs = 1; len >= 0; len--, bs *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			var1 += bs;
		}
	}

	return (var1);
}
