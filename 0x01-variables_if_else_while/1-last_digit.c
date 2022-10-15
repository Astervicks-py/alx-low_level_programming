#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enrtry space.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Ladt digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
	printf("Last digit of %d is %d and is 5 \n", n, m);
	if (m < 6 && m != 0)
		printf("Lsst digit of %d is %d and is less than six and not zero", n, m);
	/* your code goes there */
	return (0);
}
