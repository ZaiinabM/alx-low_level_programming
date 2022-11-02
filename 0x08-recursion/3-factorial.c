#include "main.h"
/**
 * factorial - returns fact f given num
 * @n: integer
 * Return: fact f num
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
}
