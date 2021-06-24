#include <unistd.h>
/**
*_putchar - writes the character c to stdout 
*@c: The character to print
*
*Return: On Success 1.
*On error, -1 is returned, and errno is set appropriately
*/
int _putchar(cah c)
{
return (write(1, &c, 1));
}
