#include "main.h"

/**
 * _memset - fills the first n bytes of memory with b
 * @b: character to be filled in
 * @n: limit
 * @s: pointer to memory
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
