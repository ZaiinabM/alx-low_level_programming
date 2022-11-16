#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name f the person
 * @f: func pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
