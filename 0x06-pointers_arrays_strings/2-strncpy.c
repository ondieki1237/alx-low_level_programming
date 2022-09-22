#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
*_strncpy - the function that copies a string
*@*dest: - parameter number1 
*@*scr: - parameter number2
*@n: - parameter number3
*
*return (copied)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
