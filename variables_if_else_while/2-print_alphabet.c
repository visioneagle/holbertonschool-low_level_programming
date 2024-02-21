#include <stdio.h>

/*
 * Main: déclare une variable type char puis initialise la premmère lettre de l'alphabet
 * Return: Success
 */

int main(void)
{
	char abc;

	for ( abc = 'a'; abc <='z'; abc++ )

	{
		putchar(abc);
	}


	putchar('\n');
	return (0);

}
