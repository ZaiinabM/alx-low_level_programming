#include <stdio.h>
/**
 * main- print base sixteen numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char x;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
