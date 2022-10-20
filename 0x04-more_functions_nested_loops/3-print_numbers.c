#include "main.h"
/**
 * print_numbers - print from 0 to 9
 * Return: 0 Always
 */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch < 9; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
