#include <stdio.h>
/**
 * main- entry
 * Return: 0 always (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
