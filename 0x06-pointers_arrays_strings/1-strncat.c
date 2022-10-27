#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: string to be added to dest
 * @n: number of bytes
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	int i = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
