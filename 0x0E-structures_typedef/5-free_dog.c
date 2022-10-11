#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frres dogs
 * @d: pointer to dog stuct
 *
 * Return: void
 */
void free_dog(dog_t *)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
