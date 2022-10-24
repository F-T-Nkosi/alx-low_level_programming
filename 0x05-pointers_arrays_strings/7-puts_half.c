#include<stdio.h>
#include "main.h"

/**
 * puts_half - prints half a string
 * @str: the string pointer considered
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	int i, half;

	while (*str != '\0')
	{
		len++;
	}
	half = (len / 2);

	if ((len % 2) == 1)
	{
		half = ((len + 1) / 2);
	}
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
