#include "main.h"
/**
*_isdigit - check digit
*@c this is digit
*Return: Succes (0) and (1) digit
*/
int _isdigit(int c)
{



	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

