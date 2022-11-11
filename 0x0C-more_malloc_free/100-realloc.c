#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: old memory block size
 * @new_size: new memory block size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *optr;
	unsigned int i;

	if (new_size == old_size)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	nptr = malloc(new_size);
	if (!nptr)
		return (NULL);

	optr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = optr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = optr[i];
	}
	free(ptr);
}
