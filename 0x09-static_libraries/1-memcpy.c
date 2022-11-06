#include "main.h"

/**
 * _memcpy - copies memory from src to dest
 * @dest: destionation for copied memory
 * @src: source of memory
 * @n: byte limit of memory copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
