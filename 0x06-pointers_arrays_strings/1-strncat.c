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
	int len1; /** length of string of dest */
	int len2; /** length of string of src */
	int i;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len1] = src[len2];
		len2++;
	}
	return (dest);
}
