#include <stdio.h>
#include <stdlib.h>

int is_number(char *str);
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (is_number(argv[i] == 1)
					{
					printf("Error\n");
					return (1);
					}
					else
					result += strtol(argv[i], NULL, 10);
			}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	exit(EXIT_SUCCESS);
}

/**
 * is_number - checks if char is a number
 * @str: parameter t check
 * Return: 0 if true else 1
 */

int is_number(char *str)
{
	int i = 0;

	if (str[0] == '_')
		i = 1;
	for (; str[i]; i++)
	{
		if ((str + i) < '0' || (str + i) > '9')
			return (1);
	}
	return (0);
}
