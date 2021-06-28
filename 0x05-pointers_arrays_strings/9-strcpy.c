#include "holberton.h"

/**
 * *_strcpy- copies the string pointed to by src including the terminating null byte
 * (\0), to buffer pointed to by 'dest'.
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
