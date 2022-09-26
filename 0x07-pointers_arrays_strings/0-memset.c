#include "main.h"
#include <stdio.h>

/**
 * memset - function that fills the memory with a constant byte
 * @s: - parameter for filed bytes
 * @b: - constant byte 
 * @n: - bytes of memory area pointed by s
 * 
 * return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
