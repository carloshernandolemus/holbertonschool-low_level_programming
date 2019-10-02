#include"holberton.h"
/**
 *_strcpy - Copies the string pointed
 *@dest: dest pointer
 *@src: src pointer
 *Return: Return of value dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int var1;
	int var2;

	var1 = 0;
	while (src[var1] != '\0')
	{
		var1++;
	}
	for (var2 = 0; var2 <= var1; var2++)
	{
		dest[var2] = src[var2];
	}
	return (dest);
}
