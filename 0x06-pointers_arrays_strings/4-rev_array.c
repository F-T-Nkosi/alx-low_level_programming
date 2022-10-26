#include<stdio.h>
#include "main.h"

/**
 * reverse_array - revereses an array
 * @a: given array
 * @n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
