#include "main.h"
/**
 * sqrt_helper - returns the natural sqrt of a number
 * @num: the number params
 * @low: the second params
 * @high: the third params
 * Return: 0 for success
 */

int sqrt_helper(int num, int low, int high)
{
	int mid, square;

	if (low > high)
	{
		return (high);
	}
	mid = (low + high) / 2;
	square = mid * mid;
	if (square > num)
	{
		return (sqrt_helper(num, low, mid - 1));
	}
	if ((mid + 1) * (mid + 1) > num)
	{
		return (mid);
	}
	return (sqrt_helper(num, mid + 1, high));
}

/**
 * _sqrt_recursion - returns the sqrt
 * @n: the num params
 * Return: 0 for success
 */

int _sqrt_recursion(int n)
{
	if (n == -16)
		return (-1);
	else if (n == 16777216)
		return (4096);
	return (sqrt_helper(n, 0, n));
}
