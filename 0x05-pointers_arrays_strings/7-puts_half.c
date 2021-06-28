#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer
 *
 *Return: void
 */

void puts_char(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++);

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

