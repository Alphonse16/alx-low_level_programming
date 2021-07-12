#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (argv[i][j]; j++;)
				if (argv[i][j] < '0' || argv[i][j] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[i]);
		}
	printf("%i\n", res);
	return (0);
}

