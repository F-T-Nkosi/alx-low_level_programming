#include "main.h"

/**
 * is_prime_number - cheks for prime inputs
 * @n: input checked
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, n - 1));
}

/**
 * prime_check - finds prime recursively
 * @n: input checked
 * @i: counter
 * Return: 1 if prime else 0
 */
int prime_check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_check(n, i - 1));
}
