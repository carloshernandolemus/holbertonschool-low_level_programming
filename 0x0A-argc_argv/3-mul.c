#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function of print arguments
 *@argc: Arguments numbers
 *@argv: This is the array
 *Return: Return of value integer
 */
int main(int argc, char *argv[])
{
	int var1;
	int varx;

	varx = 1;
	if (argc == 3)
	{
		for (var1 = 1; var1 < argc; var1++)
		{
			varx = varx * atoi(argv[var1]);
		}
		printf("%d\n", varx);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
