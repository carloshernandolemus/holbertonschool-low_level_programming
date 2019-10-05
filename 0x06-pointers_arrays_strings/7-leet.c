#include "holberton.h"
/**
 *leet - This is a function of the string into 1337
 *@s: Array declared
 *Return: Returnthe value
 */
char *leet(char *s)
{
	int var1;
	int var2;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (var1 = 0; s[var1] != '\0'; var1++)
	{
		for (var2 = 0; var2 <= 9; var2++)
		{
			if (s[var1] == letters[var2])
			{
				s[var1] = numbers[var2];
			}
		}
	}
	return (s);
}
