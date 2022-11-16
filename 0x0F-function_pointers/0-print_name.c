#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name f the person
 * @f: func pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
