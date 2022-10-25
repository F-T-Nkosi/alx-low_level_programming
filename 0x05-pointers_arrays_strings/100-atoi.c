#include<stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to int
 * @s: string to convert
 * Return: the converted int
 */
int _atoi(char *s)
{
	int i, j, con, len, test, num;

	len = 0;

	while (s[len] != '\0')
		len++;
	i = 0;
	j = 0;
	con = 0;
	test = 0;
	num = 0;

	while (i < len && test == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			con = con * 10 + num;
			test = 1;
			if ((s[i + 1] < '0') || (s[i + 1] > '9'))
				break;
			test = 0;
	}
		i++;
	if (test == 0)
		return (0);
	return (con);
}
