#include "main.h"
/**
 * _puts - prints the string passed as params
 * @str: the params passed to the function
 * Return: voids and ends
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
