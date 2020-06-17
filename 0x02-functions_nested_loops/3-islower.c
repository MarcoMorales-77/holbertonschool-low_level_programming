#include "holberton.h"
/**
* _islower - identifies when c is lower & uper case
*@c: - Declaración de variable
*Return: Always 0 (Success)
*/
int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
_putchar('\n');
}
}
