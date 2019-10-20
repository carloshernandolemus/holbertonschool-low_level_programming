#include"holberton.h"
#include<stdlib.h>
/**
 *_strdup - Create a copy of the array
 *@str: Array to be copy
 *Return: Return a pointer of array
 */
char *_strdup(char *str)
{
	int var1;
	int var2;
	char *var3;

	var1 = 0;
	if (str == NULL)
		return (NULL);
	while (str[var1])
	{
		var1++;
	}
	var1++;

	var3 = (char *) malloc(var1 * sizeof(char));
	if (var3 == NULL)
		return (NULL);

	for (var2 = 0;var2 <= var1; var2++)
	{
		var3[var2] = str[var2];
	}
	return (var3);
}
