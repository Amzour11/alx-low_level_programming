#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: address of pointer
 * @index: node's index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int n = 0;

	if (!head || !*head)
		return (-1);
	if (index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (n == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		n++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
