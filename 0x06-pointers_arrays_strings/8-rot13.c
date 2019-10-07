#include "holberton.h"
/**
 *rot13 - This is a function of the string rot13
 *@s: This is a array
 *Return: Return the value
 */
char *rot13(char *s)
{
	int var1;
	int var2;

	char input[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char output[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (var1 = 0; s[var1] != '\0'; var1++)
	{
		for (var2 = 0; var2 <= 51; var2++)
		{
			if (s[var1] == input[var2])
			{
				s[var1] = output[var2];
				break;
			}
		}
	}
	return (s);
}
