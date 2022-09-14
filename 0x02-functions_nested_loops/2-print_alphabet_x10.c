#include "main.h"
/**
 *   print_alphabet_x10 - prints alphabet 10 times
 *    Return:void
*/
void print_alphabet_x10(void);
{
	char y;
	int x = 0;

	while (x < 10)
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
}
