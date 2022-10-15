#include <stdio.h>
/**
 * main- possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a, b = '0', c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = c; b <= '9'; b++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
			}
			if (a == c)
			{
				continue;
			}
			if (a == '8' && c == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		b++;
	}
	putchar('\n');
	return (0);
}
