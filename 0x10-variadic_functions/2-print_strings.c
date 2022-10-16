#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_strings - a function that prints strings
*@separator - the string that is to be printed in between the strings
*@n - number of strings passed to the function
*return - if one string is NULL (nil) instead print the strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(valist);
}
