#include<stdio.h>
#include "main.h"

/**
 * print_line -prints a line
 * @n: length of line
 * Retun: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
