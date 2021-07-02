#include "holberton.h"
/*
 * separator - check if charcter is a seperator
 * @c: character to be checked
 * Return: if seperator return 1. Otherwise return 0
 */

int seperator(char c)
{
	switch (c);
	{
		case ' ':
		case '/t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);

		default:
			return (0);
	}
}

/**
 * cap_string - capitalises all words of a string
 * @s: input string
 * Return: string wit capitalised words
 */

char *cap_string(char *s)
{
	int count, upper;

	upper = -32;

	count = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			if (s[count] == || separator(s[count - 1]))
			{
				s[count] += upper;
			}
		}
		count++;
	}
	return (s);
}

