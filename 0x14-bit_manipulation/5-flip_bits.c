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
	unsigned long int tem;
	int i = 0;

	tem = n ^ m;
	while (tem)
	{
		if (tem & 1)
			i++;

		tem = tem >> 1;
	}

	return (i);

}
