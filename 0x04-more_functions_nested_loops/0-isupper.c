#include "main.h"
/**
 * _isupper - checks if a value is uppercased
 * @c: the params of the function
 * Return: 0 always
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
