#include "main.h"
/**
 * _abs - prints the absolute values
 * @c: takes an int as input params for the function
 * Return: 0 always
 */

int _abs(int c)
{
	int a;
	/*Some computations*/
	if (c < 0)
		a = c * -1;
	else
		a = c;
	return a;
}
