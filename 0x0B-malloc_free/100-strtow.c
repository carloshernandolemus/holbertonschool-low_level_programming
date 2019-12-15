#include"holberton.h"
#include<stdlib.h>
/**
 *strtow - Splits a string
 *@str: string
 *Return: Pointer to an array
 */
char **strtow(char *str)
{
	char **s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		s = malloc(4 * sizeof(char));

		if (s == NULL)
		{
			return ('\0');
		}
		else
		{
			return (s);
		}
	}
}
