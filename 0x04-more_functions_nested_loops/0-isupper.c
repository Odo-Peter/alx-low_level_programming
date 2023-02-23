#include "main.h"
/**
 * _isupper - checks if a value is uppercased
 * @c: the params of the function
 * Return: 1 or 0 on completion
 */

int _isupper(int c)
{
	char i = c;
	/*The loops below checks for c*/
	for (i = 'A'; i <= 'z'; i++)
	{
		if (i >= 'A' && i <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
