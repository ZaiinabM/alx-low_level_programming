#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * @a: pointer t an array
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
