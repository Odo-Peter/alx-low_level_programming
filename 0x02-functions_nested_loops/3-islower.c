#include "main.h"
/**
 * _islower - prints out checks for chars that lowercase
 * Return: 1 for a lowercase char and 0 for otherwise
 */

int _islower()
{
	int i;
	/*The loop to check chars*/
	for (i = 65; i <= 122; i++)
	{
		if (_putchar(i) > _putchar(96))
		{
			return (1);
		} else if (_putchar(i) < _putchar(91))
		{
			return (0);
		}
	}
	return (0);
}
