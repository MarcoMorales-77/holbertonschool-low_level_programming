#include "holberton.h"
/**
 * _puts - function to print a string
 * @str: variable
 * Return: no return
 */

void _puts(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0' ; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
