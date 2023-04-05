#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the elements of a listint_t list
 * @h: pointer to the head node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
