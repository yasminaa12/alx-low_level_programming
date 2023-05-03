#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *nw;

	if (!head || !*head)
		return (0);
	nw = (*head)->next;
	temp = (*head)->n;
	free(*head);
	*head = temp
	return (nw);
}

