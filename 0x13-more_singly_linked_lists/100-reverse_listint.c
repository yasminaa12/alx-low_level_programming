#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = NULL, *s = NULL;

	while (*head != NULL)
	{
		s = (*head)->next;
		(*head)->next = h;
		h = *head;
		*head = s;
	}

	*head = s;
	return (*head);
}
