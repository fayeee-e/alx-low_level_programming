#include "main.h"

/**
 * Main - print_alphabet - utilizes on the _putchar function to print a - z
 * Return: 0
 */

void print_alphabet(void) /*Print a-z in lowercase */
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
