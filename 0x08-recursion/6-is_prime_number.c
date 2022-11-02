#include "main.h"
/**
 * is_prime - detects if input is a prime num
 * @n: input num
 * @c: iteratr
 * Return: 1 if n is a prime 0 otherwise
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - returns i if int is a prime num
 * @n: the int
 * Return: 1 if int is a prime num
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
	return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
