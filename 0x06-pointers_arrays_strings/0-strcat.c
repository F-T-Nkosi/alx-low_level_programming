#include<stdio.h>

/**
 * _strcat - Appends string two to the end of string one
 * @dest: is string one
 * @src: is string two
 * Return: pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
