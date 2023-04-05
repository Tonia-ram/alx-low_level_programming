#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at any given position
 * @head: pointer to the beginning of linked list
 * @idx: index of list where to add new node
 * @n: value of new node
 * Return: address of new node or NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *end_node = *head;

	unsigned int node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = end_node;
		*head = new_node;
		return (new_node);
	}
	for (node = 0; node < (idx - 1); node++)
{
	if (end_node == NULL || end_node->next == NULL)
	{
		return (NULL);
	}
		end_node = end_node->next;
}
	new_node->next = end_node->next;
	end_node->next = new_node;

	return (new_node);
	}
