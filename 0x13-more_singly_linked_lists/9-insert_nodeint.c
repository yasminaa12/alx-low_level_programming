#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head
 * @idx: index of the list where the new node should be added
 * @n: elements
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *nw = malloc(sizeof(listint_t)), *h;

	if (head == NULL || !nw)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (!idx)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	h = *head;
	while (h)
	{
		if (i == idx - 1)
		{
			nw->next = h->next;
			h->next = nw;
			return (nw);
		}
		i++;
		h = h->next;
	}
	free(nw);
	return (NULL);
}

