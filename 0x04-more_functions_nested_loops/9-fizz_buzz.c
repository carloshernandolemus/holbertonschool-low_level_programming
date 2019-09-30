#include <stdio.h>
/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int var1;

	for (var1 = 1; var1 <= 100; var1++)
	{
		if (var1 % 3 == 0 && var1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (var1 % 3 == 0 && var1 % 5 != 0)
		{
			printf("Fizz");
		}
		else if (var1 % 3 != 0 && var1 % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", var1);
		}
		if (var1 != 100)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
