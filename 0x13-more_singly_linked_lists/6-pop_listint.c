#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t
 * @head:double pointer
 *
 * Return: oioozs node's value
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int  i;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	i = node->i;
	free(node);
	return (i);
}
