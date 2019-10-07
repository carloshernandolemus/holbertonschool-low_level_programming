#include "holberton.h"
/**
 *_memcpy - This is the function of change
 *@dest: This is a pointer of first char
 *@src: This is a pointer of second char
 *@n: This is a ui variable
 *Return: Return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int var1;
	
	for (var1 = 0; var1 < n; var1++)
	{
		dest[var1] = src[var1];
	}
	return (dest);
}
