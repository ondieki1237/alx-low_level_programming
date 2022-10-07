#iclude "main.h"
#include <stdio.h>

/**
*_strcmp - function used to compare two strings
*@*s1: - first parameter
*@*s2: - second parameter
*return (compared string)
*/
int strcmp(char *s1, char *s2)
{
    int flag = 0;
    while(*s1!='\0' && *s2!='\0')
    {
        if(*s1=*s2)
        {
            flag=1;
        }
        s1++;
        s2++;
    }
    if(flag==0)  
    return 0;  
    else  
    return 1;
}
