#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string input
 */
void print_rev(char *s)
{
	int count = 0;
	int i, n;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}
	for (n = (count - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
