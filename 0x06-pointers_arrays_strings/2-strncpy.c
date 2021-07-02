#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: copy destination
 * @src: copy source
 * @n: bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

