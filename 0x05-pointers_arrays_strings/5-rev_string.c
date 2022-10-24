#include<stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string input
 * @s: is the string input pointer
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;

	int i;

	char new = s[0];

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		new = s[i];
		s[i] = s[l];
		s[l] = new;
	}
}
