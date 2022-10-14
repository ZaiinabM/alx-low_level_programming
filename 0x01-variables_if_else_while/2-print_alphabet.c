#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0 if no errors, non zero if error
 */
int main(void) /*this is the entry point*/
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

