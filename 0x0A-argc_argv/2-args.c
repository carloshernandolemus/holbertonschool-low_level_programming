#include <stdio.h>
/**
 * main - The main function of print arguments
 *@argc: Arguments numbers
 *@argv: This is the array
 *Return: Return of value integer
 */
int main(int argc, char *argv[])
{
	int var1;

	for (var1 = 0; var1 < argc; var1++)
	{
		printf("%s\n", argv[var1]);
	}
	return (0);
}
