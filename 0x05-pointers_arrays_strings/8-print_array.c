#include<stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: is the array pointer
 * @n: is the number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
