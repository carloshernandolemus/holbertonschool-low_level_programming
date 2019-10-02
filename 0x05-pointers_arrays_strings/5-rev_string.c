#include "holberton.h"
/**
 *rev_string - This is the function of string
 *@s: This is a char variable
 *Return: Return of value
 */
void rev_string(char *s)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int temp;

	var1 = 0;
	while (s[var1] != '\0')
	{
		var1++;
	}
	temp = var1 - 1;
	for (var2 = temp; var2 > (temp / 2); var2--)
	{
		var4 = temp - var2;
		var3 = s[var2];
		s[var2] = s[var4];
		s[var4] = var3;
	}
}
