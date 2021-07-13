#include <stdlib.h>

/**
 * create_array - creates an array o chars
 * and initialises it with a specific char
 * @size: size of the array
 * @c: char to initialise
 * Return: pointer to the array initialised or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);
	if (size == 0 || m == 0)
	{
		return (0);
	}
	while (size--)
	{
		m[size] = c;
	}
	return (m);
}

