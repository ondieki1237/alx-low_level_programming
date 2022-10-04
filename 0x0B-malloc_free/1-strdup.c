#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function that returns a newly allocated malloc
 * @str - a copy of the returned dtring
 * return - null if str is null and a pointer if sucessful
 */
char *_strdup(char *str)
{

char *ar;
unsigned int i = 0;
unsigned int j = 0;
if (str == NULL)
return (NULL);
while (str[i])
i++;
ar = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[j];
j++;
}
ar[j+1] = 0;
return (ar);
}
