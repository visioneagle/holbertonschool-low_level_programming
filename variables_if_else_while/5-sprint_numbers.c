#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Success 0
 */

int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= "10"; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');
	return (0);


}
