#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @d: integer
 * Return: value of last digit
 */
int print_last_digit(int d)
{
	int ld;

	ld = d % 10;
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return (ld);
}
