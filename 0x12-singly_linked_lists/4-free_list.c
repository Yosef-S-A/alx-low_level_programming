#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a the memory space occupied by the nodes of list_t list
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
