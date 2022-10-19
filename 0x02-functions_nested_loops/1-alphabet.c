#include<stdio.h>
#include "main.h"

/**
 *print_alphabet - writes the alphabet in lowercase to stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}
