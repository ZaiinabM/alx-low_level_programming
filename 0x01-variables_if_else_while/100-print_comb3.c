#include <stdio.h>
/**
 * main- possible combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n1, n2 = '0', n3;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = n3; n2 <= '9'; n2++)
		{
			if (n1 != n3)
			{
				putchar(n1);
				putchar(n3);
			}
			if (n1 == n3)
			{
				continue;
			}
			if (n1 == '8' && n3 == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		n2++;
	}
	putchar('\n');
	return (0);
}
