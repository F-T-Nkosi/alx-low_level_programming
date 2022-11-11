#include "main.h"

/**
 * _mset - copies a constant character in memory
 * @p: memory pointer
 * @b: constant character
 * @n: number of repetitions
 *Return: pointer to memory
 */
char *_mset(char *p, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = b;
	return (p);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: size of array
 * @size: size of elements is array
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p2;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p2 = malloc(size * nmemb);

	if (p2 == NULL)
		return (NULL);

	_mset(p2, 0, nmemb * size);

	return (p2);
}
