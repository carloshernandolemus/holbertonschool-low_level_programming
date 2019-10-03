#include "holberton.h"
/**
 *_strncat - This is the function of change
 *@dest: This is a pointer of first string
 *@src: This is a pointer of second string
 *@n: This is a integer variable
 *Return: Return value
 */
char *_strncat(char *dest, char *src, int n)
{
	int var1;
	int var2;

	var1 = 0;
	while (dest[var1] != '\0')
	{
		var1++;
	}
	for (var2 = 0; var2 < n && src[var2] != '\0'; var1++, var2++)
	{
		dest[var1] = src[var2];
	}
	return (dest);
}
