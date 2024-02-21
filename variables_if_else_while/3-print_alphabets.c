#include<stdio.h>
/**
 * main - prints alphabetique minus et majuscule 
 * Return = ok success
 */
int main(void)
{

	char minus;

	for (minus = 'a'; minus <= 'z'; minus++)
	{
		putchar(minus);
	}

	for (minus = 'A'; minus <= 'Z'; minus++)
	{
		putchar(minus);
	}

	putchar('\n');

	return (0);
	
}
