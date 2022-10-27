#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* free_listint- frees a listint_t
* @head: pointer to head pointer of linked list
* Return: a freed linked list
*/
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
