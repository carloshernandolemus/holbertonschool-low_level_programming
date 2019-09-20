#include <stdio.h>
/**
 *main - This is the main function
 *Return: Return function
 *putchar: This is a putchar function
*/
int main(void)
{
        char var1, var2;

	for (var1 = 'a'; var1 <= 'z'; var1++)
		putchar(var1);
	for (var2 = 'A'; var2 <= 'Z'; var2++)
	        putchar(var2);
	putchar('\n');
	return (0);
}
