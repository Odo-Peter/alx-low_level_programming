#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: first params
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
	}
	_putchar('\n');
}