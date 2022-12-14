#include<stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 * @dest: destionation pointer
 * @src: source pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	int i;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
