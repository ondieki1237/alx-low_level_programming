#include <main.h>
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@n: integer that that concatenates two strings.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char s1[90] = "Hello";
	printf(" ");
	char s2[7] = " World!";
	strncat(s1,s2,7);
	printf(" %s\n", s1);
    return (0);
}
