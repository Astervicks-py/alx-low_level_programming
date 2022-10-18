#include "main.h"
/**
 * main -- print a bunch of stuff
 */
void print _alphabet(void);
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j)
		}
		_putchar('\n');
	}
}
