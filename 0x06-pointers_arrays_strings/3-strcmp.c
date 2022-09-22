#include "main.h"
#include <stdio.h>

/**
*_strcmp - compares two strings
*@s1: - parameter number 1
*@s2: - parameter number 2
*
*return (comparison)
*/
int _strcmp(char *s1, char *s2)
{
int flag=0;
while(*s1!='\0' && *s2!='\0')
{
if(*s1!=*s2)
{
flag=1;
}
s1++;
s2++;
}
if(flag==0)
return (0);
else return 1;
}
