#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n:no of elements of array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
