#include "holberton.h"
/**
 *_isalpha - This is the logical function prototype
 *@c: Is the variable
 *Description: Display the result of the function
 *Section  header: It's header or librery
 *Return: Display 1 if c is lowercase and 0 if is otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
