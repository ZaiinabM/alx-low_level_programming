#include "main.h"
/**
 * _strlen - writes function that returns length of a string
 * @s: the character
 * Return: no return
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
}
