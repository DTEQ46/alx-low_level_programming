#include "main.h"

/**
 *   main - check the code.
 *   
 *    Return: Always 0.
*/
void print_alphabet_x10(void);
{
	char x = 0,y;
	while (x <= 10)
	{

	y = 'a';

	while (y <= 'z')
	{
		_putchar(y);
		y++;


	}

	_putchar('\n');
	x++;

	}







	return (0);
}
