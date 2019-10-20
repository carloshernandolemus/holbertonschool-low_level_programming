#include"holberton.h"
#include<stdlib.h>
/**
 *str_concat - Concatenate the two string
 *@s1: String 1
 *@s2: String 2
 *Return: Return a pointer of strings
 */
char *str_concat(char *s1, char *s2)
{
	int var1;
	int var2;
	int var3;
	int var4;
	char *var5;

	var1 = 0;
	var2 = 0;
	var3 = 0;
	var4 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[var1])
	{
		var1++;
	}
	while (s2[var2])
	{
		var2++;
	}
	var2++;

	var5 = (char *) malloc((var1 + var2) * sizeof(char));
	if (var5 == NULL)
		return (NULL);
	for (var3 = 0; var3 < var1; var3++)
	{
		var5[var3] = s1[var3];
	}
	for (var4 = 0; var4 <= var2; var4++)
	{
		var5[var1 + var4] = s2[var4];
	}
	return (var5);
}
