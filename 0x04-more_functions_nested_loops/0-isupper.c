#include "main.h"
/**
 * _isupper - checks if a value is uppercased
 * @c: the params of the function
 * Return: 1 or 0 on completion
 */

int _isupper(int c)
{
	char i;
	/*The loops below checks for c*/
	for (i = 0; i <= 127; i++)
	{
		if (i >= 65 && i <= 90 && i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
