#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 *get_endianness - Checks the endianness
 *Return: Return the result
 */
int get_endianness(void)
{
	unsigned int var1;
	char *str = (char *)&var1;

	var1 = 1;
	if (*str)
		return (1);
	else
		return (0);
}
