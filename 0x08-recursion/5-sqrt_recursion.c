#include "main.h"

/**
 * _sqrt_recursion - returns natrual square root
 * @n: input sqaure
 * Return: natrual sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_root(n, 0));
}
/**
 * actual_root -finds the squar root
 * @n: is input sqaure
 * @i: is a counter
 * Return: sqaure root
 */
int actual_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_root(n, i + 1));
}
