#include "holberton.h"

/**
* factorial  - prints pointer string length.
*@n: - Declaration of variable
*Return: int
*/

int factorial(int n)
{

if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

if (n > 0)
{
	return (factorial(n - 1) * n);
}
else
{
return (-1);
}
}
