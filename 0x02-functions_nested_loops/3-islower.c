#include "main.h"
/**
 * _islower - prints out checks for chars that lowercase
 *@c: is the parameter that is passed to the function
 * Return: 1 for a lowercase char and 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else {
		return (0);
	}
	return (0);
}
