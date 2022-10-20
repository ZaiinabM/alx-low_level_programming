#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the standout
 * @c: the character
 * Return: on success 1, else -1
 */
int _putchar(char c)
{
	return (write1(1, &c, 1));
}

