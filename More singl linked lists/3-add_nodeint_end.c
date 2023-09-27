#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the head node
 * @n: the value to store in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		end_node = *head;
		while (end_node->next)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}
	return (new_node);
}
