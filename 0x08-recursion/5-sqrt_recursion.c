#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: the number params
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
	if (square == num)
	{
		return (mid);
	} else if (square > num)
	{
		return (sqrt_helper(num, low, mid - 1));
	} else
	{
		return (sqrt_helper(num, mid + 1, high));
	}
}

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0, n));
}
