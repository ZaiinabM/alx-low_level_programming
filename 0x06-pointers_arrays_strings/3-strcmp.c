#include "main.h"
/**
 * _strcmp - copies a string
 * @s1: string 1
 * @s2: string 2
 * Return: difference between two strings
 */
int _strcmp(char *s1, char *s2)
{
	int len2;

	len2 = 0;
	while (s1[len2] != '\0' && s2[len2] != '\0')
	{
		if (s1[len2] != s2[len2])
		{
			return (s1[len2] - s2[len2]);
		}
		len2++;
	}
	return (0);
}
