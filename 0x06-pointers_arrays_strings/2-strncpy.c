#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string to be added to dest
 * @n: number of bytes
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len2;

	len2 = 0;
	while (len2 < n && src[len2] != '\0')
	{
		dest[len2] = src[len2];
		len2++;
	}
	while (len2 < n)
	{
	dest[len2] = '\0';
	len2++;
	}
	return (dest);
}
