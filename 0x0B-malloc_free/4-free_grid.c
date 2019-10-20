#include"holberton.h"
#include<stdlib.h>
/**
 *free_grid - Function dimensional arryas
 *@grid: Two dimensional array
 *@height: Height dimensional array
 *Return: Return void
 */
void free_grid(int **grid, int height)
{
	int var1;

	for (var1 = 0; var1 < height; var1++)
	{
		free(grid[var1]);
	}
	free(grid);
}
