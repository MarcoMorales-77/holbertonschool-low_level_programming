#include "holberton.h"
/**
*_pow_recursion - function that takes power elevated.
*@x: - Declaration of variable
*@y: - Declaration of variable
*Return: int
*/

int _pow_recursion(int x, int y)
{

if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
if (y > 0)
{
return (x * (_pow_recursion(x, y - 1)));
}
return (0);
}
