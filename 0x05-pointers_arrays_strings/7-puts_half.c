#include "main.h"

/**
 * puts_half - puts half of a string
 * @str: input
 */
void put_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++
	}

	-putchar('\n');
}
