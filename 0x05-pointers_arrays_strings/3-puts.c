#include "main.h"
/**
 * _strlen - writes function that prints a string
 * @str: the string input
 * Return: string
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
