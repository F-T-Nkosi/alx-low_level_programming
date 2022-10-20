#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet in lowercase x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';

	int b = 0;

	while (b <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			if (a == 'z')
				putchar('\n');
			a++;
		}
	b++;
	}
}
