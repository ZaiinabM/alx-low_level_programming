#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times diagonal line should be drawn
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
		_putchar('\n');

	for (j = 0; j < n; j++)
	{
		_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
