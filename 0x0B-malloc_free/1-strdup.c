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
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
