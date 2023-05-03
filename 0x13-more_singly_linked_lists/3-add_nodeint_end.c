#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: elements
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;


	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	tmp = *head;
	if (*head == NULL)
		*head = nw;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = nw;
	}
	return (*head);
}
