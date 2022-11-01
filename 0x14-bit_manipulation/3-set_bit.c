#include "main.h"

/**
* set_bit - sets the bit at index 1
* @n: number
* @index: index within binary number
* Return: returns 1, or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int max_bits;
unsigned long int seth = 1;
max_bits = (sizeof(unsigned long int) * 8);
if (index > max_bits)
return (-1);
seth <<= index;
*n = (*n | seth);
return (1);
}
