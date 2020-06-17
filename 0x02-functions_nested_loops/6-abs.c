#include "holberton.h"
/**
*_abs - prints absolute value
*@r: variable
*Return: Always 0 (Success)
*/
int _abs(int r)
{
int v;
if (r < 0)
{
v = r * -1;
return (v);
}
else
{
return (r);
}
}
