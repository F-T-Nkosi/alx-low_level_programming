#include<stdio.h>
#include "main.h"

/**
 * _islower - writes if a character is lower or not
 *
 * Return: Always 1 if c is lower, else 0
 */
int _islower(int c)
{
	if (c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
