#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: first params
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		s--;
		_puts_recursion(char *s);
	}
}
