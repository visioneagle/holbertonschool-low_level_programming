#include <stdio.h>
/**
*main - prints all the numbers of base 16 in lowercase
*Return: Arrived 0 success
*/
int main(void)
{

        int num;
	char alph;

	for (num = 0; num <= 9; num++)


		putchar(num);



	for (alph = 'a'; alph <= 'f'; alph++)


		putchar(alph);

	

	putchar('\n');
	return (0);

}
