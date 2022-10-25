#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - prints all elements of list_t list
* print_list - list of the printed
* @h: linked list
* Return: number of nodes in linked list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
