#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the address of pointer to the first node
 *
 * Return: popped node's value
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = node;
	return (i);
}
