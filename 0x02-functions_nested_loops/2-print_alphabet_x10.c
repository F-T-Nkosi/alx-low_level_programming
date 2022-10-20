#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet in lowercase x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
			if (j+1 == 123)
			{
				_putchar('\n');
			}
		}
		putchar('\n');
		i++;
	}
}
