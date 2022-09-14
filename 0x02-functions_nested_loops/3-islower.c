#include "main.h"
/**
 * The function check its argument
 * if it is lowercase it returns 1
 * else it returns 0
 * it uses ASCII to perform this
 * operation
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
	}
	_putchar('\n');	
}
