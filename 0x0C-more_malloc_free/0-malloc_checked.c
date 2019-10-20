#include"holberton.h"
#include<stdlib.h>
/**
 *malloc_checked - Function for checked malloc
 *@b: Size variable int
 *Return: Pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *var1;

	var1 = malloc(b);
	if (var1 == NULL)
		exit(98);
	return (var1);
}
