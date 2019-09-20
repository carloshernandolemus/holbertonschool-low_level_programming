#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
	int var1;

	for (var1 = 97; var1 < 123 ; var1++)
	{
		if (var1 == 113 || var1 == 101)
		{
			var1++;
		}
		putchar(var1);
	}
	putchar('\n');
	return (0);
}
