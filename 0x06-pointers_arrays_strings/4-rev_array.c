#include "main.h"
/**
 * reverse_array - prints an array in reverse
 * @a: the array params
 * @n: the second params
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	/*some computations below*/
	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
		}
		_putchar(a[i] + '0');
		n--;
	}
	_putchar('\n');
}
