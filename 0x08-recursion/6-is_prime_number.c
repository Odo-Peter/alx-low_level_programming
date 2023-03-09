#include "main.h"
/**
 * is_prime_recursive - returns 1 if it is a prime number
 * @n: the input params
 * @i: the second params
 * Return: 0 for success
 */

int is_prime_recursive(int n, int i)
{
	if (i == 1)
		return (1);
		if (n % i == 0)
			return (0);
		return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - returns a prime number
 * @n: input params
 * Return: 0 for success
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}
