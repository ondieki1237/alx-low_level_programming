#include "main.h"
#include <stdio.h>
/**
 * factorial: - functio that returns a factorial of a number
 * @n: - value of the integer
 *
 * Return: Always 0.
 */
int factorial(int n)
{
if (n == 0)
return (1);
return (n) * factorial(n - 1);
}
int main()
{
int num = 5;
printf("Factorial of %d is %d", num, factorial(num));
return (0);
}
