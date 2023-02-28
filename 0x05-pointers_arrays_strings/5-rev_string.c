#include "main.h"
/**
 * rev_string - reverses the string passed to it
 * @s: the params passed to the function
 * Return: void and ends
 */

void rev_string(char *s)
{
	char *ptr = s;
	/*some loops*/
	while (*ptr)
	{
		ptr++;
	}
	while (ptr != s)
	{
		ptr--;
		_putchar(*ptr);
	}
	_putchar('\n');
}
