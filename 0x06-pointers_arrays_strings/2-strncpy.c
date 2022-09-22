#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@dest : the appended string
 *@src : to be concatenated
 *@n : number of bytes to not to be terminated
 *
 * Return: a new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_len =0;
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    src = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    dest = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
	return (0);


{
strncat(dest, src, n);
return (dest)
}
