#include "main.h"
#include <stdio.h>

/*
 *_string - function for checking the pointer
 *@to - the value to be changed to char
 *@s - value to be changed to char
 *
 *return: always 0
 */
 
void set_string(char **s, char *to)
{
    char *s = "Bob Dylan";
    char *to = "Robert Allen";

    printf("%s, %s\n", s, to);
    set_string(&s1, s0);
    printf("%s, %s\n", s, to);
    return (0);
}
