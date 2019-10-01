#include "holberton.h"
/**
 *swap_int - This is the function of change
 *@a: This is a new value of parameter
 *@b: This is a new value of other parameter
 */
void swap_int(int *a, int *b)
{
	int var1 = *a;
	*a = *b;
	*b = var1;
}
