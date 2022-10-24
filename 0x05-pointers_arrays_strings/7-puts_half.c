#include<stdio.h>
#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the string pointer considered
 * Return: void
 */
void puts_half(char *str)
{
	int i, h;

	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	h = (len / 2);

	if ((len % 2) == 1)
	{
		h = ((len + 1) / 2);
	}

	for (i = h; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
