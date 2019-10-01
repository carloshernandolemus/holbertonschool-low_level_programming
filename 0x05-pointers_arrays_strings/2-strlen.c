#include "holberton.h"
/**
 *_strlen - This is the function of string
 *@s: This is a char variable
 *Return: Return of value
 */
int _strlen(char *s)
{
	int var1 = 0;

	while (s[var1] != '\0')
		var1++;

	return (var1);
}
