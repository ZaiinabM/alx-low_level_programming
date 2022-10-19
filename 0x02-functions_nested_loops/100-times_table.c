#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b,ab;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			 _putchar(48);
			 for (b = 1; b <= n; b++)
			 {
				 op = a * b;
				 _putchar(44);
				 _putchar(32);
				 if (op <= 9)
				 {
					 _putchar(32);
					 _putchar(32);
					 _putchar(
