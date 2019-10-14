#include <stdio.h>
#include <stdlib.h>
/**
 * main - The main function of main arguments
 *@argc: Arguments numbers
 *@argv: This is the array
 *Return: Return of value integer
 */
int main(int argc, char *argv[])
{
	int var1;
	int var2;
	int varadd;

	varadd = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (var1 = 1; var1 < argc; var1++)
	{
		for (var2 = 0; argv[var1][var2]; var2++)
		{
			if (argv[var1][var2] < 48 && argv[var1][var2] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		varadd = varadd + atoi(argv[var1]);
	}
	printf("%d\n", varadd);
	return (0);
}
