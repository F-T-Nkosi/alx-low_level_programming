#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to head of linked list
 * Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
