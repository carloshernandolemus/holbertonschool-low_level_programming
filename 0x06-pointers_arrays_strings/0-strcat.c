#include "holberton.h"
/**
 *_strcat - This is the function of change
 *@dest: This is a pointer of first string
 *@src: This is a pointer of second string
 *Return: Return value
 */
char *_strcat(char *dest, char *src)
{
	int var1;
	int var2;

	var1 = 0;
	while (dest[var1] != '\0')
	{
		var1++;
	}
	for (var2 = 0; src[var2] != '\0'; var2++)
	{
		dest[var1 + var2] = src[var2];
	}
	return (dest);
}
