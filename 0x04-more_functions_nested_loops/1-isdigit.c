#include "main.h"
/**
 * _isdigit - prints out 1 or 0 to check a value
 * @c: the function params
 * Return: 0 or 1 at completion
 */

int _isdigit(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
