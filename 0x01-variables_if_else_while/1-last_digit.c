#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - headers goes there
 *Return: zero
*/
int main(void)
{
	int n;
	int var1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	var1 = n % 10;
	if (var1 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, var1);
	}
	else if (var1 < 6 && var1 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, var1);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, var1);
	}
	return (0);
}
