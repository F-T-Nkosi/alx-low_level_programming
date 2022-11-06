#include<stdio.h>
#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: is the character checked
 * Return: 1 if true, 0 if not
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
