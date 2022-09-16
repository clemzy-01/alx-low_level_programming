#include "main.h"

/**
 * print_line - prints the line
 *
 * @n: integer denoting number of prints
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
