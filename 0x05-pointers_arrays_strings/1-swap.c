#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * @a: the pointer to the first int params
 * @b: the pointer to the second int params
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;
	/*the swaps goes here*/
	t = *a;
	*a = *b;
	*b = t;
}
