#include<stdio.h>

/**
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	printf("Size of a 'char' on my pc: %lu bytes \n", sizeof(char));
	printf("Size of a 'int' on my pc: %lu bytes \n", sizeof(int));
	printf("Size of a 'float' on my pc: %lu bytes \n", sizeof(float));
	printf("Size of a 'n' on my pc: %lu bytes \n", sizeof(n));
	char c;

	printf("Address of varable 'n': %p \n", &n);
	printf("Address of variable 'c': %p \n", &c);

	int *ptr;
	printf("Size of pointer: %lu\n", sizeof(ptr));

	printf("Adress of pionter 'ptr': %p \n", &ptr);

	n = 98;

	ptr = &n;

	printf("adress of 'n': %p \n", &n);
	printf("Value of 'ptr': %p\n", ptr);

	printf("Value of 'n': %d \n", n);
	*ptr = 402;
	printf("Value of 'n': %d\n", n);

	return (0);
}
