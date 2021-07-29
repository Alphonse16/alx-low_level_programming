#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments and prints results
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int first_number;
	int second_number;

	if (argc == 3)
	{
		first_number = atoi(argv[1]);
		second_number = atoi(argv[2]);
		printf("%i\n", first_number * second_number);
		return (0);
	}
	printf("Error\n");
	return (0);
}

