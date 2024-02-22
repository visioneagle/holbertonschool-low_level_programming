#include <stdio.h>
/**
*main -  all possible combinations of single-digit numbers
*Return: valide code
*/

int main(void)
{

	int num;

	for (num = 0; num < 9; num++)
	{

		putchar(num);
		if (num == 9)
			continue;


		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
