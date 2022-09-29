#include "main.h"
#include <stdio.h>
/**
 * factorial: - functio that returns a factorial of a number
 * @n: - value of the integer
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
