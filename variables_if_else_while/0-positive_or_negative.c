#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d \n", x);

	if (x > 0)
	{
		printf("le nombre est positif \n");

	}
	else if (x < 0)
	{

		printf("le nombre est négatif \n");
	}
	else
	{

		printf("le nombre est zero \n");
	}
	return (0);
}

