#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times a straight line is printed
 * Return : no return
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
