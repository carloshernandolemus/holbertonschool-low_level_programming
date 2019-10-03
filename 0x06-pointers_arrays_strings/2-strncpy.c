#include "holberton.h"
/**
 *_strncpy - This is the function of change
 *@dest: This is a pointer of first string
 *@src: This is a pointer of second string
 *@n: This is a integer variable
 *Return: Return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int var1;
	int var2;

	for (var1 = 0; var1 < n && src[var1] != '\0'; var1++)
	{
		dest[var1] = src[var1];
	}
	for (var2 = var1; var2 < n; var2++)
	{
		dest[var2] = '\0';
	}
	return (dest);
}
