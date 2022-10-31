#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: binary
 * Return: a binary representation
 */
void print_binary(unsigned long int n)
{
size_t sz;
static char s[BITS_PER_LONG + 1] = {0};
char *p = s + BITS_PER_LONG;
register size_t i;
for (i = 0; i < sz; i++)
*--p = (n >> i & 1) ? '1' : '0';
return (p);
}
