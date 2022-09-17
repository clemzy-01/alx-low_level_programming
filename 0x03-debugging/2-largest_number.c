#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	
	srand(time(0));
	b = rand() - RAND_MAX / 2;
	
	srand(time(0));
	c = rand() - RAND_MAX / 2;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
        {
		largest = b;
	}
        else
	{
		largest = c;
        }

	return (largest);
}
