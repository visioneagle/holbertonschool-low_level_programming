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

	printf("%d \n", n);

	if (n > 0)
	{
		printf("le nombre est positif\n");

	}
	else if (n < 0)
	{

		printf("le nombre est négatif\n");
	}
	else
	{

		printf("le nombre est zero\n");
	}
	return (0);
}

