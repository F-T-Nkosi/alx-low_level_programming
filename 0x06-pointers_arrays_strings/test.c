#include<stdio.h>

int main(void)
{
	char a[7] = "Hello ";
	char b[7] = "World!";

	int *aa;
	int *bb;

	aa = &a;
	bb = &b;


	int i = 0, j;

	while(aa[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (bb[j] != '\0')
	{
		*aa[i] = *bb[j];
		i++;
		j++;
	}
	*aa[i] = '\0';

	printf("the string is: %s\n", a);

	return (0);
}
