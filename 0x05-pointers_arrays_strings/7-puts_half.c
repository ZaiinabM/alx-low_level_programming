#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int i, n = 0;

	while (n >= 0)
	{
	if (str[n] == '\0')
		break;
	n++;
	}
	if (n % 2 == 1)
		i = n / 2;
	else
		i = (n - 1) / 2;

	for (i++; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
