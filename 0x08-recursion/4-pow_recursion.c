#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - a function that returns a function that is raised
 * @x: - the base of the return value
 * @y: - the raised power
 *
 * Return: the value of x raisedto the power if y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * (_pow_recursion(x, y, -1)));
}
