#include "main.h"
/**
 * _isupper - checks if a value is uppercased
 * @c: the params of the function
 * Return: 1 or 0 on completion
 */

int _isupper(int c)
{
	char a = c;
	/*The conditionals below checks for c*/
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{
		return(0);
	}
	return (0);
}
