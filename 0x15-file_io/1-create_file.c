#include <stdio.h>
#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *create_file - Function that creates the text file
 *@filename: This is the file char type
 *@text_content: This is the text content
 *Return: Return the cretes file
 */
int create_file(const char *filename, char *text_content)
{
	int var1, var2 = 0, var3W;

	if (filename == NULL)
	{
		return (-1);
	}
	var1 = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (var1 == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[var2])
	{
		var2++;
	}
	var3W = write(var1, text_content, var2);
	if (var3W == -1)
	{
		return (0);
	}
	close(var1);
	return (1);
}
