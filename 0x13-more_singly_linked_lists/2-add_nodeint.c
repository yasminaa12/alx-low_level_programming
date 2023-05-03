#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: elements
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
