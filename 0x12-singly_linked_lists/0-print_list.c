#include <stdio.h>
#include "lists.h"

/**
 * print_list - display the content of all nodes of the list_t list
 * @h: pointer to the the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
{
if (tmp->str)
printf("[%u] %s\n", tmp->len, tmp->str);
else
printf("[%u] %s\n", 0, "(nil)");
tmp = tmp->next;
}
return (i);
}

