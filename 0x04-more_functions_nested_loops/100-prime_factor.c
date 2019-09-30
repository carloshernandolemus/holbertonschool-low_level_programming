#include <stdio.h>
#include <math.h>
/**
 * main - The main function
 *
 * Return: Return function
 */
int main(void)
{
	int var1;
	long var2 =  612852475143;

	for (var1 = (int) sqrt(var2); var1 > 2; var1++)
	{
		if (var2 % var1 == 0)
		{
			printf("%d\n", var1);
			break;
		}
	}
	return (0);
}
