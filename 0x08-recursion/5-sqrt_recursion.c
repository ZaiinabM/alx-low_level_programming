#include "main.h"

/**
 * power_operation - returns the natura sqr rt f a num
 * @n: input
 * @c: iteratr
 * Return: sqr rt r -1
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
			return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - prints sqr root of a num
 * @n: the num
 * Return: -1 ifn does not have natural sqr rt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
