#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *active_node = *head;
	listint_t *adj_node = NULL;

	while (active_node != NULL)
	{
		adj_node = active_node->next;
		active_node->next = old_node;

		old_node = active_node;
		active_node = adj_node;
	}
	*head = old_node;

	return (*head);
}
