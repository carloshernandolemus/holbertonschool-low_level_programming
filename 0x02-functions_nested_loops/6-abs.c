#include "holberton.h"
/**
 *_abs - This is the logical function prototype
 *@var1: Is the variable
 *Description: Display the result of the function
 *Section  header: It's header or librery
 *Return: Display return
 */

int _abs(int var1)
{
	if (var1 < 0)
	{
		return (-var1);
	}
	else
	{
		return (var1);
	}

	return (0);
}
