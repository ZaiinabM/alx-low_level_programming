#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: input
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;

	int c = 0;

	unsigned int i, en;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c++;
	}
	c += 1;
	duplicate = malloc(c * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = str[i];
	return (duplicate);
}
