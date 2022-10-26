#include<stdio.h>

/**
 * _strncat - appends string one and two wihin n bytes
 * @dest: string one
 * @src: string two
 * @n: byte limit for appending string two
 * Return: dest string pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

