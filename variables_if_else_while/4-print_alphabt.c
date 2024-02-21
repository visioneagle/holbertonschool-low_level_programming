#include <stdio.h>
/**
 * main - Prints abc without e and q
 * Return: Arrived succes
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{

		if (abc != 'e' && abc != 'q')
			putchar(abc);

	}

	putchar('\n');
	return (0);

}















