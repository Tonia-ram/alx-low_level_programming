#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list and returns,
 * data in the head node (n).
 * @head: A pointer to a pointer to the first node of the list
 * Return: The data (n) of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

if (*head == NULL)
{
	return (0);
}
	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (data);
	}
