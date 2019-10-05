#include "holberton.h"
/**
 *cap_string - This is a function of change
 *@s: This is a array
 *Return: Return value in char
 */
char *cap_string(char *s)
{
	int var1;
	int var2;

	var1 = 0;
	while (s[var1] != '\0')
	{
		var1++;
	}

	var2 = 0;
	while (var2 < var1)
	{
		if (var2 == 0 && s[var2] >= 97 && s[var2] <= 122)
		{
			s[var2] = s[var2] - 32;
		}
		if ((s[var2] == 44 || s[var2] == 59 || s[var2] == 46 ||
		     s[var2] == 33 || s[var2] == 63 || s[var2] == 34 ||
		     s[var2] == 40 || s[var2] == 41 || s[var2] == 123 ||
		     s[var2] == 125 || s[var2] == '\t' || s[var2] == 32 ||
		    s[var2] == '\n') &&
			(s[var2 + 1] >= 97 && s[var2 + 1] <= 122))
		{
			s[var2 + 1] = s[var2 + 1] - 32;
		}
		var2++;
	}
	return (s);
}
