#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@n: integer that that concatenates two strings.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)


cat > 0-strcat.c
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strcat(char *dest, char *src) - function that concatenates two strings.
 *@n: integer that that concatenates two strings.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    char s1[98] = "Hello";
	char s2[] = "World!";
	char *ptr;
	
	printf("%s\n", s1);
	printf("%s\n", s2);
    
	ptr = strcat (s1, s2);
	printf("%s\n", s1);
	
	printf("%s\n", s2);
    printf("%s", ptr);
    return 0;
    
}
