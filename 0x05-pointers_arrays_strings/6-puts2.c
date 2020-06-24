#include "holberton.h"
/**
 * puts2 - function to print a string
 * @str: variable
 * Return: no return
 */

void puts2(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != '\0')
	{
		if (a % 2 == 0 && a >= 0)
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
