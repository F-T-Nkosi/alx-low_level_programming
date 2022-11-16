#include<stdio.h>
#include "main.h"

/**
 * print_name - prints a name
 * @name: name printed
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
