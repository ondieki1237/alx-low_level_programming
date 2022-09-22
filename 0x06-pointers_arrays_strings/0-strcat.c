#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@dest : the appended string
 *@src : to be concatenated
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
