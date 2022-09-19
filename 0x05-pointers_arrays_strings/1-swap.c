#include "main.h"

/**
*swap_int - swaps two integers' values
*@b: second integer
*@a: first integer
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
