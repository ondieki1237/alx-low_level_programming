#include "main.h"

/**
*swap_int - swaps two inteer values
*@a: first unteger
*@b: second integer
*return: nothing
*/

void swap_int(int *a, int *b)
{
    int tmp = *a;
    *b = *a;
    *b = tmp;
}
