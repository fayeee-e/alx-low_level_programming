#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int y; /*ones digit*/
	int x; /*tens digit*/

	for (x = '0'; x <= '9'; x++) /*increment for the tens digit*/
	{
		for (y = (x + 1); y <= '9'; y++) /*increment for the ones digit by 1 each time*/
		{
			putchar(x);
			putchar(y);

			if (y != '8' || x != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
