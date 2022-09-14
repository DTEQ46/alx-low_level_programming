#include "main.h"
/**
 * This function checks its argument
 * if it is a letter, it returns 1
 * else, it returns 0
 * it uses ASCII to perform
 * this operation
*/
int print_sign(int n)
{
	if ((n >= 97 && n <= 122) || (n >= 65 && n <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
