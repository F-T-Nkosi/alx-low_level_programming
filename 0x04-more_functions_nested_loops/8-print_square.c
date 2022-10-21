#include<stdio.h>
#include "main.h"

/**
 * print_square - prints the size of square
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
