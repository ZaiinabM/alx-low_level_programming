#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
		printf("%d\n", i - 1);
	}
	return (0);
}
