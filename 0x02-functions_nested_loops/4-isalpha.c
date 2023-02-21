#include "main.h"
/**
 * _isalpha - prints out 0 or 1, base on the conditionals
 * @c: This is the params passed onto the function
 * Return: 0 for success
 */

int _isalpha(int c)
{
	if (c == 91 || c == 92 || c == 93 || c == 94 || c == 95 || c == 96)
		return (0);
	else if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
