#include "main.h"

/**
 * more_numbers - print the numbers
 *
 */
void more_numbers(void)
{
	int b;
	int d;

	for (b = 0; b <= 9; b++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
