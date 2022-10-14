#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a program that executes a func given as aparam
 * @size - the size of the array
 * @action - the pointer of the func used
 * @array - array to iterate over
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (!array || !action)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
