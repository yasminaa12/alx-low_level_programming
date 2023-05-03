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
	listint_t *pv, *next;

	prv = *head;
	if (index != 0)
	{
		for (i = 0 ; i < index - 1 && pv != NULL ; i++)
			pv = pv->next;
	}
	if (pv == NULL || (pv->next == NULL && index != 0))
		return (-1);
	next = pv->next;
	if (index != 0)
	{
		pv->next = next->next;
		free(next);
	}
	else
	{
		free(pv);
		*head = next;
	}
	return (1);
}
