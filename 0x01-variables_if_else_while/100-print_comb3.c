#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
	int var1, var2;

	for (var1 = 48 ; var1 <= 57 ; var1++)
	{
		for (var2 = var1 + 1; var2 <= 57; var2++)
		{
			putchar(var1);
			putchar(var2);
			if (var1 != 56 || var2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
