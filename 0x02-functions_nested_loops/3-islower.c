#include<stdio.h>
#include "main.h"

/**
 * _islower - writes if a character is lower or not
 *@c: The character evaluated
 *
 * Return: Always 1 if c is lower, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
