#include "main.h"
/**
 * _islower - prints out checks for chars that lowercase
 * Return: 1 for a lowercase char and 0 for otherwise
 */

int _islower(int c)
{
	c += '0';
	/*The loop to check chars*/
	for (c = 'A'; c <= 'z'; c++)
	{
		if (c > 'Z')
		{
			return (1);
		} else
		{
			return (0);
		}
	}
	return (0);
}
