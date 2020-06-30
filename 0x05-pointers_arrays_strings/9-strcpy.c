#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @src: la cadena que vamos a copiar
 * @dest: donde la vamos a copiar
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	return (dest);
}