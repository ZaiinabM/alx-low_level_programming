#include "dog.h"
#include <stdlib.h>
/**
 * free_dog- frees dogs
 * @d: struct dog
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
