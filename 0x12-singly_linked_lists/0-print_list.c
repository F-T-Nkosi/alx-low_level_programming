#include "lists.h"

/**
 * print_list - prints the elements in a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("nil\n");
		return (0);
	}
	while (h)
	{
		printf("%s\n", h->str);
		h = h->next;
		count++;
	}

	return (count);
}
