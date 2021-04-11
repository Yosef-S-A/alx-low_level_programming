#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory space occupied by nodes of listint_t list.
 * @head: double pointer to the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
