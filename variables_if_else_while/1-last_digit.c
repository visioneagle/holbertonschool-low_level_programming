#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print last digit
 * Return: success
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (n > 5)
	{

		printf("Last digit of %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{

		printf("Last digit of %d and  is 0\n", n);
	}
	else if (n < 6)
	{

		printf("Last digit of %d and is less than 6\n", n);
	}
	return (0);
}
