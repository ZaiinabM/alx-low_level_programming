#include <stdio.h>
/**
 * main- entry
 * Return: 0 if successful
 */
int main(void)
{
	char x;

	for (x = 'z'; x <= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
