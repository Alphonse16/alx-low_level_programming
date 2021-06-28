#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints n elements of a array of intergers, followed by a new line.
*@a: first pointer
*@n: second pointer
*Return: void
*/

void print_array(int *a, int *n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}

