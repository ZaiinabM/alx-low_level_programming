#include "main.h"
/**
 *_isalpha- checks for alphabetic character
 *@c: represents the character to be checked
*Return: if c is an alphabet (upper or lowercase) return 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
