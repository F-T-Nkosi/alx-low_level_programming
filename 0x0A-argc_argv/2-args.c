#include "main.h"

/**
 * main - prints all arguments recieved
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
