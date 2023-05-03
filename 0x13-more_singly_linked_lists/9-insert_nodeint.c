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
	listint_t *sk = malloc(sizeof(listint_t)), *h;

	if (head == NULL || !sk)
		return (NULL);
	sk->n = n;
	sk->next = NULL;
	if (!idx)
	{
		sk->next = *head;
		*head = sk;
		return (sk);
	}
	h = *head;
	while (h)
	{
		if (i == idx - 1)
		{
			sk->next = h->next;
			h->next = sk;
			return (sk);
		}
		i++;
		h = h->next;
	}
	free(sk);
	return (NULL);
}
