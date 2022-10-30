

#include "lists.h"

/**
* count_nodes_till_loop - count nodes to know now many unique nodes to print
* @head: pointer to head pointer of linked list
* Return: number of unique nodes in list before a loop
*/
int count_nodes_till_loop(const listint_t *head)
{
listp_t *temp;
list_t *curr;
if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
/**
* print_listint_safe - count nodes to know now many unique nodes to print
* @head: pointer to head pointer of linked list
* Return: number of unique nodes in list before a loop
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nnodes = 0;
listp_t *hptr, *new, *add;
hptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));
if (new == NULL)
exit(98);
new->p = (void *)head;
new->next = hptr;
hptr = new;
add = hptr;
while (add->next != NULL)
{
sdd = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n;
free_listp(&hptr);
return (nnodes);
}
}
prrintf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nnodes++;
}
free_listp(&hptr);
return (nnodes);
}
