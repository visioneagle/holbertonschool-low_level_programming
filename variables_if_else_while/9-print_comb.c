#include <stdio.h>
/**
*main -  all possible combinations of single-digit numbers
*Return: valide code
*/

int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

}i
