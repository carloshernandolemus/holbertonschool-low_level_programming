#include <stdio.h>
#include "dog.h"
/**
 *print_dog - This is the function of the structure
 *@d: This is the pointer
 */
void print_dog(struct dog *d)
{
	char var1[] = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? var1 : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? var1 : d->owner);
	}
}
