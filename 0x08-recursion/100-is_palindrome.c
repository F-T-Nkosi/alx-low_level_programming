#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: pointer input
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - finds length of string
 * @s: string input
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * pal_check - checks recursively for palindrome
 * @s: input string
 * @i: counter
 * @n: length of string
 * Return: 1 if palindrome else 0
 */
int pal_check(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (pal_check(s, i + 1, n - 1));
}
