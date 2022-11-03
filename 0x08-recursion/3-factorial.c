#include "main.h"

/**
 * factorial - returns the factorial of an input
 * @n: numerical input
 * Return: factorial of input
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
