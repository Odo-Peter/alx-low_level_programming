#include "main.h"
/**
 * _print_rev_recursion - prints reverse string
 * @s: string params
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s--;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
