#include "main.h"
/**
*print_most_numbers - display digit except 2 and 4
*Return: Ok digit
*/
void print_most_numbers(void)
{

	int c;

	for (c = '0'; c <= '9'; c++)
	{

	if (c != '2' && c != '4')

		_putchar(c);

	}
	_putchar('\n');

}
