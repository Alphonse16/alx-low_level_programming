#include "holberton.h"

/**
 * _sqrt_recursion - find natural sqaure root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int sqaure(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else 
{
return (-1);
}
}

