#include "main.h"

/**
 * largest_number - int a, int b, int c
 * @a: first number
 * @b: Second number
 * @c: Third number
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
