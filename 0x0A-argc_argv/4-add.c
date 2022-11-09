#include "main.h"
#include<ctype.h>

/**
 * main - prints the sum of numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success else 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);

			for (j = 0; argv[i][j] > '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
