#include "holberton.h"
/**
 *_islower - This is the logical function prototype
 *@c: Is the variable
 *Description: Display the result of the function
 *section  header: It's header or librery
 *Return: Dsiplay 1 if c is lowercase and 0 if is otherwise
 */

int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
