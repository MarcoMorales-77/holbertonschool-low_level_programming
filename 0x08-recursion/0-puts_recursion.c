#include "holberton.h"

/**
* _puts_recursion - prints pointer string
*@s: - Declaration of variable
*Return: Void
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
	else if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
}
