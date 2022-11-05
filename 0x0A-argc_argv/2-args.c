#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	while (argc--)

	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
