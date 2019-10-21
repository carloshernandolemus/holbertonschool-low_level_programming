#include "dog.h"
/**
 *init_dog - This is the function
 *@d: This is the pointer
 *@name: Name
 *@age: Age
 *@owner: Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
