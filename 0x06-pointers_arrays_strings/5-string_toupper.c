#include<stdio.h>
#include "main.h"

/**
 * string_toupper - changes all letters to uppercase
 * @p: input pointer
 * Return: pointer p
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (p);
}
