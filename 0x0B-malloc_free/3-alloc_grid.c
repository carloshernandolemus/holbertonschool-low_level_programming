#include"holberton.h"
#include<stdlib.h>
/**
 *alloc_grid - Function for return pointer 2 dimensional arrays
 *@width: Width dimensional array
 *@height: Height dimensional array
 *Return: Return a pointer
 */
int **alloc_grid(int width, int height)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int **var5;

	if (width <= 0 || height <= 0)
		return (NULL);
	var5 = malloc(height * sizeof(int *));
	if (var5 == NULL)
		return (NULL);

	for (var1 = 0; var1 < height; var1++)
	{
		var5[var1] = (malloc(width * sizeof(int)));

		if (var5[var1] == NULL)
		{
			for (var2 = var1; var2 >= 0; var2--)
			{
				free(var5[var2]);
			}
			free(var5);
			return (NULL);
		}
	}

	for (var3 = 0; var3 < height; var3++)
	{
		for (var4 = 0; var4 < width; var4++)
		{
			var5[var3][var4] = 0;
		}
	}
	return (var5);
}
