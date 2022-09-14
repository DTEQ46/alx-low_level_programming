#include "main.h"
/**
 *   print_alphabet_x10 - prints alphabet 10 times
 *    Return:void
*/
void print_alphabet_x10(void);
{
	char y;
	int i = 0;

	while (i < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		i++;
	}
}
