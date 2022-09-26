#include "main.h"
#include <stdio.h>

/**
 * memset - function that fills the memory with a constant byte
 * @src: - parameter for filed bytes
 * @dest: - constant byte 
 * @n: - bytes of memory copied
 * 
 * return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    dest[i] = src[i];
    return (dest);
}
