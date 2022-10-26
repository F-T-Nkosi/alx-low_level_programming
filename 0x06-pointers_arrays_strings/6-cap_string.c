#include<stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes each word in the string
 * @p: pointer to string
 * Return: pointer to string
 */
char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		while (p[i] >= 'a' && p[i] <= 'z')
		{
			i++;
			if (i == 0 ||
					p[i-1] == '\t' ||
					p[i-1] == '\n' ||
					p[i-1] == ',' ||
					p[i-1] == '.' ||
					p[i-1] == '!' ||
					p[i-1] == '?' ||
					p[i-1] == '"' ||
					p[i-1] == '(' ||
					p[i-1] == ')' ||
					p[i-1] == '{' ||
					p[i-1] == '}' ||
					p[i-1] == ' ')
			{
				p[i] = p[i] - 32;
			}
		}
	}
}
