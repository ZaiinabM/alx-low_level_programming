#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int prduct = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			prduct = prduct * strtol(argv[i], NULL, 10);
		printf("%d\n", prduct);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
