#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Liberates space of the memory
 *@d: Pointer of the structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
