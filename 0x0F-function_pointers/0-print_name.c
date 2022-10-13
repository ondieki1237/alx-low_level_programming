#include <stdio.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name: - a function that prints a name
 * @name: parameter that function ptr needs
 * @f: function to execute
 * return (name)
 */
void print_name(char *name, void (*f)(char *))
{
		if (name != NULL && f != NULL)
		f(name);
}
