#include "main.h"

/**
 * factorial - returns the factorial of an input
 * @n: numerical input
 * Return: factorial of input
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
