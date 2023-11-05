#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: header of the doubly linked list
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int num = 0;

	if (h == NULL)
		return (num);
	while (h != NULL)
	{
		h = (*h).next;
		num++;
	}
	return (num);
}
