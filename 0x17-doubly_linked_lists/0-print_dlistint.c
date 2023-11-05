#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list.
 *@h: header of the doubly linked list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int numNodes = 0;

	if (h == NULL)
		return (numNodes);
	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		numNodes++;
	}
	return (numNodes);
}
