# include "holberton.h"
/**
* print_sign - identifies n as a number sign
*@n: - Declaración de variable
*Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
}
return (-1);
_putchar('\n');
}
