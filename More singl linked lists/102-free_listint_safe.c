#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to pointer to the head of the linked list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;
	
	if (h == NULL || *h == NULL)
		return (0);
	current = *h;
	*h = NULL;
       
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		
		if (next >= current)
		{
			exit(98);
		}
		
		current = next;
	}
	return (count);
}

