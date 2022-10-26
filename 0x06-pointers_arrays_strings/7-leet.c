#include<stdio.h>
#include "main.h"

/**
 * leet - encodes a string into leet
 * @p: pointer string input
 * Return: pointer
 */
char *leet(char *p)
{
	int i, j;

	char a[] = "aAeEoOtTIL";
	char b[] = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = b[j];
			}
		}
	}
	return (p);
}
