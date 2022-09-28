

#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*@c: the character to print
*
*return: on success1
*on error, return -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
