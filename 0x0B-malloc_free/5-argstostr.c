#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - Concatenates all the arguments
 *@ac: Numbers arguments
 *@av: Arrays arguments
 *Return: A char
 */
char *argstostr(int ac, char **av)
{
	int var1;
	int var2;
	int var3;
	int var4;
	int var5;
	int var6;
	char *str;

	var1 = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	var5 = 1;
	for (var2 = 0; var2 < ac; var2++)
	{
		for (var3 = 0; av[var2][var3]; var3++)
		{
			var5 = var5 + 1;
		}
		var5 = var5 + 1;

	}
	str = malloc(var5 * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (var4 = 0; var4 < ac; var4++)
	{
		for (var6 = 0; av[var4][var6]; var6++)
		{
			str[var1] = av[var4][var6];
			var1++;
		}

		str[var1] = '\n';
		var1++;

	}
	return (str);
}
