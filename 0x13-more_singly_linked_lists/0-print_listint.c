#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the listint_list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
	nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}

	return (nodes);
}
