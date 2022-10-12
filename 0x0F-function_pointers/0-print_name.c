#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name
 * @f: A pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
