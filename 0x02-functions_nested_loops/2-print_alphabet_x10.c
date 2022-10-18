#include "main.h"
/**
 * main - print a bunch of stuff.
 *
 * print_alphabet_x10 - print alphabets
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
