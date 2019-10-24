#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Gives length of a string
 * @s: String
 * Return: Returns length of string
 */
int _strlen(char *s)
{
	int var1;

	var1 = 0;
	while (s[var1])
		var1++;
	return (var1);
}
/**
 * _strcpy - Copy a string to another string
 * @dest: string 1
 * @src: string 2
 * Return: String copy
 */
char *_strcpy(char *dest, char *src)
{
	int var1;

	for (var1 = 0; var1 <= _strlen(src); var1++)
		dest[var1] = src[var1];
	return (dest);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age:  Age of the dog
 * @owner: Name of the owner
 * Return: A pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;
	char *Dname, *Downer;

	newD = malloc(sizeof(dog_t));

	if (newD == NULL)
		return (NULL);

	Dname = malloc((_strlen(name) + 1) * sizeof(char));

	if (Dname == NULL)
	{
		free(newD);
		return (NULL);
	}

	Downer = malloc((_strlen(owner) + 1) * sizeof(char));

	if (Downer == NULL)
	{
		free(Dname);
		free(newD);
		return (NULL);
	}

	_strcpy(Dname, name);
	_strcpy(Downer, owner);

	newD->name = Dname;
	newD->age = age;
	newD->owner = Downer;

	return (newD);
}
