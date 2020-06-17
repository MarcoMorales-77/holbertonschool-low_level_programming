#include "holberton.h"
/**
* _isalpha - identifies when c is alphabetic character
*@c: - Declaración de variable
*Return: Always 0 (Success)
*/
int _isalpha(int c)
{

if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
_putchar('\n');
}
}
