#include "main.h"
/**
 * print_last_digit - prints the last digit of an int
 * @i: the params passed to the function
 * Return: 0 always
 */

int print_last_digit(int i)
{
	int l;
	/*Some modulus computation*/
	l = i % 10;
	if (i < 0)
		l = l * -1;
	_putchar(l + '0');
	return (l);
}
