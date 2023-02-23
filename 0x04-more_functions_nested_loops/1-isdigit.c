#include "main.h"
/**
 * _isdigit - prints out 1 or 0 to check a value
 * @c: the function params
 * Return: 0 or 1 at completion
 */

int _isdigit(int c)
{
	char a = c;
	/*the computations goes here*/
	for (a = 0; a < 127; a++)
	{
		if (a >= 48 && a <= 57)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
