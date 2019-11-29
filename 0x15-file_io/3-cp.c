#include"holberton.h"

/**
 * main - Copy a file of another file.
 *@ac: Number of arguments
 *@av: Array of arguments
 *Return: Return 0.
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 *copy_file - Copies a file
 *@file_from: Origin file
 *@file_to: Destination file
 *Return: 0
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fdf, fdt;
	ssize_t whatread;
	char *buf[1024];

	fdf = open(file_from, O_RDONLY);
	fdt = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((whatread = read(fdf, buf, 1024)) > 0)
	{
		if (write(fdt, buf, whatread) != whatread || fdt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (whatread == -1 || fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fdf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdf);
		exit(100);
	}
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fdt);
		exit(100);
	}
}
