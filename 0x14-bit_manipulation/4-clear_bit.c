#include "main.h"

/**
* clear_bit - sets the bit at index 1
* @n: number
* @index: index within binary number
* Return: returns 1, or -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
if (*n & 1L << index)
*n ^= 1L << index;
return (1);
}
