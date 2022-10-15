#include <stdio.h>
/**
 * main- entry
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	char x;

	for (n = '0'; n < 10; n++)
	{
		putchar(n);
	}
	for (x = 'a'; n < 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
