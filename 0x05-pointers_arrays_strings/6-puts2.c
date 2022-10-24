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

	char *new = str;

	while (*new != '\0')
	{
		new++;
		l++;
	}
	l--;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');

}
