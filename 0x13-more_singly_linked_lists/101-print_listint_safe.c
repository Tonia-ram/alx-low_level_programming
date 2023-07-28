#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list and handles loops safely.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: The number of nodes in the list, if the function fails,
 * exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = NULL;
	size_t nodes = 0;

	while (slow_ptr)
	{
		if (is_node_visited(slow_ptr))
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			nodes++;
			break;
		}

		mark_node_visited(slow_ptr);

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		nodes++;

		slow_ptr = slow_ptr->next

			if (fast_ptr == NULL || fast_ptr->next == NULL)
				break;

		fast_ptr = fast_ptr->next->next;
	}

	return (nodes);
}

/**
 * print_listint_safe_with_loop_handling - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe_with_loop_handling(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
