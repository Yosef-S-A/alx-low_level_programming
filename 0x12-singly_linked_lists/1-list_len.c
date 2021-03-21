#include "lists.h"

/**
 * list_len - calculates the number of nodes in a linked list
 * @h: pointer to the first node of the linked list
 *
 * Return: number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
tmp = tmp->next;
return (i);
}
