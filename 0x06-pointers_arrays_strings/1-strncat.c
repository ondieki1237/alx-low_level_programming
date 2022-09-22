#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@dest : the appended string
 *@src : to be concatenated
 *@n : number of bytes to not to be terminated
 *
 * Return: a new concatenated string
 */
char *_strncat(char *dest, char *src, int n)

{
    strncat(dest, src, n);
    return (dest);
}
