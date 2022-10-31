#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area one
 * @src: memory area two
 * @n: number f bytes of memory area
 * Return: a pointer to memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];
	return (dest);
}
