#include "main.h"

/**
*_strlen - returns the length of the string
*n@: - length of the string
*Return: returns nothing
*/

int _strlen(char *s)
{
    int len = 0;
    while (*(s + len) != '\0')
    len++;
    return (len);
}
