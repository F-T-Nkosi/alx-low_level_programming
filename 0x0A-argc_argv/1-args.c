#include "main.h"

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
