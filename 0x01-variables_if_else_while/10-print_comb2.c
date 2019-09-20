#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
	int var1;

	for (var1 = 0 ; var1 < 100; var1++)
	{
		putchar((var1 / 10) + '0');
		putchar((var1 % 10) + '0');
		if (!(var1 == 99))
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
