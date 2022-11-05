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
	(void)argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
