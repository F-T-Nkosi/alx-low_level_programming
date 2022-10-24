#include<stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: is the address of the first value
 * @b: is the address of the second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
