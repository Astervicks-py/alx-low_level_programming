#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*  main - Determine if n is positive of negative or zer
 *  Return Always 0 (sucess)
 */
<F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11><F11>int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d Is Positve", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	/* your code goes there */
	return (0);
}
