#include<stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: is the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	int stop;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (stop = l; stop > 0; stop--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
