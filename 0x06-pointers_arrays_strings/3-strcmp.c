#include "holberton.h"
/**
 *_strcmp - This is the function of compare
 *@s1: This is a destination variable
 *@s2: This is a origin char variable
 *Return: Return value
 */
int _strcmp(char *s1, char *s2)
{
	int var1;

	var1 = 0;
	while (s1[var1] == s2[var1] && s1[var1] != '\0')
	{
		var1++;
	}
	return (s1[var1] - s2[var1]);
}
