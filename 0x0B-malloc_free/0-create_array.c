#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array f chars
 * @size: size
 * @c: char
 * Return: NULL if fail, pointer if success
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (NULL);
	while (size--)
		ptr[size] = c;
	return (ptr);
}
