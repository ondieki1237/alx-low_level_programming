#include "main.h"
#include <stdioh>
#include <strings.h>

/**
*reverse_array(int *a, int n) - reverses the array content
**a: array
*@n: number of elements
*
*return (0)
*/
void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
