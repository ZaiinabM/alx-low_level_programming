#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: a pointer to substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
