#include "main.h"

/**
 * print_diagsums - prints sum of diagonals
 * @a: input matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, n1, n2;

	n1 = 0;

	n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 = n1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		n2 = n2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", n1, n2);
}
