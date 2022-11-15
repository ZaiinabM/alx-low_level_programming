#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints a dog struct
 * @d: dog struct
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name is %s\n", (d->name) ? d->name : "(nil)");
		printf("Age is %f\n", (d->age) ? d->age : 0);
		printf("Owner is %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
