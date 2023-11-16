#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;

	}
	return (j);
}
