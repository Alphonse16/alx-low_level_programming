#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: String
 * Return: if separator return 1. else return 0
 */

char *leet(char *str)
{
	int count = 0, i = 0;
	char *letters = "aeotlAEOTL";
	char *numbers = "4307143071";

	while (str[count] != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (str[count] == letters[i])
				str[count] = numbers[i[];
			i++;
		}
		count++;
	}
	return (str);
}

