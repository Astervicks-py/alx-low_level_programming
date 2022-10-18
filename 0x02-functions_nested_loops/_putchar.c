#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdio
 * @c: the character to print
 *
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
