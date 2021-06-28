#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

