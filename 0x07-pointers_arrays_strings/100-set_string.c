#include "main.h"
#include <stdio.h>
/**
*set_string - function for checking the pointer
*@to: - the value to be changed to changed
*@s:- value to be changed to char
*
*return: always 0
*/
void set_string(char **s, char *to)
{
*s = to;
}
