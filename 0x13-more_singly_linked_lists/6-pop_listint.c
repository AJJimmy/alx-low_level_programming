#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: pointer to the head of the listint_t list
 *
 * Return: 0 or head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int emp;

	if (*head == NULL)
	return (0);

	temp = *head;
	emp = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (emp);
}
