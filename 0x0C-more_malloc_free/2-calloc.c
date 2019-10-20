#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function to allocates memory for an array
 * @nmemb: First string
 * @size: Second string
 * Return: Return to a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int var1;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (var1 = 0; var1 < (nmemb * size); var1++)
		str[var1] = 0;
	return (str);
}
