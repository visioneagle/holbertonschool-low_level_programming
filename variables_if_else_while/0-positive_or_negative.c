#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print number positive
 *
 *Return: always success
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d positif\n", n);

	}
	else if (n < 0)
	{

		printf("%d négatif\n", n);
	}
	else if (n == 0)
	{

		printf("%d zero\n", n);
	}

	return (0);
}

