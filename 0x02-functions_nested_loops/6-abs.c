#include "main.h"
#include <stdio.h>
/**
 * _abs - returns absolute value
 * @i: integer value
 * Return: absolute value
*/
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
