#include "main.h"
/**
 * _isupper - checks if a value is uppercased
 * @c: the params of the function
 * Return: 1 or 0 on completion
 */

int _isupper(int c)
{
	char a = c + '0';
	/*The conditionals below checks for c*/
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return(0);
	return (0);
}
