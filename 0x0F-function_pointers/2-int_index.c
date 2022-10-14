#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - execute function on an array via a function ptr
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer comparing the func
 *  Return: index where integer's found, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
