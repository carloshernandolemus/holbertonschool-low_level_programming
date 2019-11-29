#include"holberton.h"
#include<stdlib.h>

/**
 *strtow - Splits a string
 *@str: String
 *Return: Pointer to an array
 */

char **strtow(char *str)
{
	int var1, var2, var4, var5;
	int **var3;

	if (width <= 0 || height <= 0)
		return (NULL);
	var3 = malloc(height * sizeof(int *));
	if (var3 == NULL)
		return (NULL);

	for (var1 = 0; var1 < height; var1++)
	{
		var3[var1] = (malloc(width * sizeof(int)));

		if (var3[var1] == NULL)
		{
			for (var2 = var1; var2 >= 0; var2--)
			{
				free(var3[var2]);
			}
			free(var3);
			return (NULL);
		}
	}

	for (var4 = 0; var4 < height; var4++)
	{
		for (var5 = 0; var5 < width; var5++)
		{
			var3[var4][var5] = 0;
		}
	}
	return (var3);
}
