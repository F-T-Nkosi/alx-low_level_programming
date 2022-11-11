#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory allocated
 * Return: pointer to joint string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_2;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		s1_2 = malloc(sizeof(char) * (l1 + n + 1));

	else
		s1_2 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s1_2)
		return (NULL);

	while (i < l1)
	{
		s1_2[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		s1_2[i++] = s2[j++];
	while (n > l2 && i < (l1 + l2))
		s1_2[i++] = s2[j++];
	s1_2[i] = '\0';

	return (s1_2);
}
