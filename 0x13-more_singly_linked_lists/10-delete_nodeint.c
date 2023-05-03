#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: head
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *hs, *next;

	hs = *head;
	if (index != 0)
	{
		for (i = 0 ; i < index - 1 && hs != NULL ; i++)
			hs = hs->next;
	}
	if (hs == NULL || (hs->next == NULL && index != 0))
		return (-1);
	next = hs->next;
	if (index != 0)
	{
		hs->next = next->next;
		free(next);
	}
	else
	{
		free(hs);
		*head = next;
	}
	return (1);
}
