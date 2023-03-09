#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: first params
 * Return: void
 */

void _puts_recursion(char *s)
{
	s--;
	if (*s != '\0')
	{
		_puts_recursion(char *s);
	}
	_putchar('\n');
}
