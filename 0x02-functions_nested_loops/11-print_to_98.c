#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numres to 98
 * @n: tthe starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		print("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
