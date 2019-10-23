#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - This is a function prototype
 * @str: This variable recive the first value of the function main
 * Description: Returns a pointer to a newly allocated space in memory
 * section header: Section description
 * Return: Return a pointer
 */

char *_strdup(char *str)
{
	int var1;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	for (var1 = 0; str[var1] != '\0'; var1++)
	{
	}
	str2 = (char *)malloc((sizeof(char) * var1) + 1);
	if (str2 == NULL)
	{
		free(str2);
		return (NULL);
	}
	for (var1 = 0; str[var1] != '\0'; var1++)
	{
		str2[var1] = str[var1];
	}
	str2[var1] = '\0';
	return (str2);
}

/**
 * new_dog - This is the function prototype
 * @name: This variable recive the first value of the function main
 * @age: This variable recive the second value of the function main
 * @owner: This variable recive the thirth value of the function main
 * Description: Function that creates a new dog
 * section header: Section description
 * Return: Return a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;
	char *varP, *varQ;

	newD = malloc(sizeof(dog_t));
	if (newD == NULL)
	{
		free(newD);
		return (NULL);
	}
	varP = _strdup(name);
	if (varP == NULL)
	{
		free(varP);
		return (NULL);
	}
	varQ = _strdup(owner);
	if (varQ == NULL)
	{
		free(varQ);
		return (NULL);
	}
	newD->name = name;
	newD->age = age;
	newD->owner = owner;
	return (newD);
}
