#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase
*Return: Arrived 0 success
*/
int main(void)
{

	char abc123;

	for (abc123 = '0'; abc123 <= 9; abc123++)
	{

		putchar(abc123);

	}

	for (abc123 = 'a'; abc123 <= 'f'; abc123++)
	{

		putchar(abc123);

	}

	putchar('\n');
	return (0);

}
