#include<stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the string whos lenth is required
 * Return: Always length of string (Success)
 */
int _strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
