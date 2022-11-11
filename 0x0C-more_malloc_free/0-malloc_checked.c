#include "main.h"

/**
 * malloc_checked - allocates memory with malloc
 * @b: amount of memory
 * Return: pointer to memory allocation
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}