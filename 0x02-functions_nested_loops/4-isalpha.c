#include "main.h"
/**
*_isalpha check the code for alphabetic character uppercase or lowercase
*@c: is the int that will be used for the argument
*return: 0
*/
int _issalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
		return (0);
}
