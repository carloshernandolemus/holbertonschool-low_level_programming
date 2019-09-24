#include "holberton.h"
/**
 *print_alphabet - This is the logical function
 *_putchar: This is a putchar function
 */

void print_alphabet(void)
{
	char var1;

	for (var1 = 97; var1 < 123 ; var1++)
	{
		_putchar(var1);
	}
	_putchar('\n');
}
