#include<stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: is the character evaluated
 * Return: 1 if c is uppercase, if not 0
 */
int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
