#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
	int var1;

	for (var1 = 48; var1 < 58; var1++)
	{
		putchar(var1);
		if (!(var1 == 57))
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
