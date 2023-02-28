#include "main.h"
/**
 * rev_string - reverses the string passed to it
 * @s: the params passed to the function
 * Return: void and ends
 */

void rev_string(char *s)
{
	char *ptr = s;
	char t;
	/*some loops*/
	if (s)
	{
		while (*ptr)
		{
			++ptr;
		}
		--ptr;
		while (s < ptr)
		{
			t = *s;
			*s++ = *ptr;
			*ptr-- = t;
		}
	}
	_putchar('\n');
}
