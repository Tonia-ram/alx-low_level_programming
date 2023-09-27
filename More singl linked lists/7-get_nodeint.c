#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *
 * @head: A pointer to the first node of the list
 * @index: The index of the node to fetch, starting at 0
 *
 * Return: A pointer to the nth node of the list,
 * or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
{
	if (head == NULL)
	{
		return (NULL);
	}
	head = head->next;
}
	return (head);
	}
