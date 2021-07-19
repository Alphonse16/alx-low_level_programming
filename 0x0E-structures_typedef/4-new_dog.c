#include "dog.h"

/**
 * _strdup - returns a pointer to space in memory contatining copy of string
 * @s: pointer to the string
 * Return: pointer to a string stored in memory.
 */

char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);

	while (s[i] != '\0')
		i += 1;

	i++;

	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);

	while (j < i)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}

