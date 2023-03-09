#include "main.h"
/**
 * is_prime_number - returns 1 if it is a prime number
 * @n: the input params
 * Return: 0 for success
 */

int is_prime_recursive(int n, int i)
{
	if (i == 1)
		return 1;
	else
	{
		if (n % i == 0)
			return 0;
		else
			return is_prime_recursive(n, i - 1);
	}
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}
