#include "function_pointers.h"

/**
 * print_name - Prints a name
 *
 * @name: name.
 * @f: function.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
