#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit
 * Return: success
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{

		printf("Last digit of %d and %d is greater than 5\n", n, m);

	}
	else if (m == 0)
	{

		printf("Last digit of %d and %d is 0\n", n, m);

	}
	else if (m < 6 && m != 0)
	{

		printf("Last digit of %d and %d is less than 6\n", n, m);

	}
	return (0);
}
