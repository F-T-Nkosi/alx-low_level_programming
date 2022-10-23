#include<stdio.h>
#include "main.h"

/**
 * print_sign - writes the sign of an input number
 * @n: is the number evaluated
 *
 * Return: 1 for positive numbers, 0 for 0 and -1 for negative
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
