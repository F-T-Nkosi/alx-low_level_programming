#include "main.h"

/**
 * _strchr - locates the first matching charater in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
