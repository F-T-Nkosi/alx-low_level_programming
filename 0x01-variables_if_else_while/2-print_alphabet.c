#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lalpha = tolower(x);

		putchar(lalpha);
	}
	putchar('\n');

	return (0);
}
