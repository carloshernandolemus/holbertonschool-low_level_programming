#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
	int var1;

	for (var1 = 122; var1 > 96 ; var1--)
	{
		putchar(var1);
	}
	putchar('\n');
	return (0);
}
