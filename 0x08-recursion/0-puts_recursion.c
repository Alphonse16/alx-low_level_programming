#include "holberton.h"
/**
 * _puts_recusrsion - prints a string followed by a new line
 *Description: Prints a string using recursion function followed
 *by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');

}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}


