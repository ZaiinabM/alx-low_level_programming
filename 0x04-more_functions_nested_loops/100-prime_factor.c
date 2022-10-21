#include <stdio.h>
/**
 * main - prints the largest prime number
 * Return: 0 Always
 */
int main(void)
{
	long int n, xy;

	n = 612852475143;
	for (xy = 2; xy <= n; xy++)
	{
		if (n % xy == 0)
		{
			n /= xy;
			xy--;
		}
	}
	printf("%zu\n", xy);
	return (0);
}

