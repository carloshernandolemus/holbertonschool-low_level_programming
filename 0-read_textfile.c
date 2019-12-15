#include <stdio.h>
#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *read_textfile - Function that read the text file
 *@filename: This is the file char type
 *@letters: This is the varibale letters
 *Return: Return the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int var1, var2R, var3W;

	char *l = malloc(letters);

	if (l == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	var1 = open(filename, O_RDONLY);
	if (var1 == -1)
	{
		return (0);
	}
	var2R = read(var1, l, letters);
	if (var2R == -1)
	{
		return (0);
	}
	var3W = write(STDOUT_FILENO, l, var2R);
	if (var3W == -1)
	{
		return (0);
	}
	else
	{
		return (var3W);
	}
	close(var1);
}
