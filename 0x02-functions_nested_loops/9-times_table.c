#include "main.h"
/**
 * times_table - print 9 times table
 * Return: 0 Always
 */
void times_table(void)
{
	int i, j, ij;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			ij = i * j;

			if (ij <= 9)
				_putchar(' ');
			else
				_putchar((ij / 10) + '0');
			_putchar((ij % 10) + '0');
		}
		_putchar('\n');
	}
}

