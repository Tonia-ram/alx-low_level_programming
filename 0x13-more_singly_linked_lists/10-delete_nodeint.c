#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node at index of a linked list.
 * @head: pointer to the start of a linked list
 * @index: index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	node = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (!node->next)
			return (-1);
		node = node->next;
	}
	temp = node->next;
	node->next = temp->next;
	free(temp);
	return (1);
}
