#include "main.h"

/**
 * swap_int - returns the length of the string
 * @a: int a
 * @b: int b
 * Return: Success 1;
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
