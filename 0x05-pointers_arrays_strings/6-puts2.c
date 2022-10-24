#include<stdio.h>
#include "main.h"

/**
 * puts2 - prints every other entry in a string
 * @str: is the string entered
 * Return: void
 */
void puts2(char *str)
{
	int l = 0;

	int i;

	while (*str != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		_putchar(*str);
		str++;
		str++;
	}

	_putchar('\n');

}
