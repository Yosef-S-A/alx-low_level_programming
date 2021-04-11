#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * printed - creates the new list of displayed nodes
 * @lst: the old list of displayed nodes
 * @sz: size of the new list (always one more than the old list)
 * @n: new node to add to the list of displayed nodes
 *
 * Return: pointer to the new list
 */
const listint_t **printed(const listint_t **lst, size_t sz, const listint_t *n)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(lst);
		exit(98);
	}
	for (i = 0; i < sz - 1; i++)
		newlist[i] = list[i];
	newlist[i] = n;
	free(lst);
	return (newlist);
}

/**
 * print_listint_safe - diplays a listint_t linked list safely
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = printed(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
