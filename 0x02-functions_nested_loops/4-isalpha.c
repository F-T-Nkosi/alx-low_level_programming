#include<stdio.h>
#include "main.h"

/**
 * _isalpha - checks if the input is a letter.
 * @c: The character evaluated
 *
 * Return: 1 if is letter, else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
