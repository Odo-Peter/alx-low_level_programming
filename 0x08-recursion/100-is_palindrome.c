#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string params
 * Return: sting length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * is_pal_rec - checks for position of chars
 * @str: the first params
 * @s: the start point
 * @e: the end point
 * Return: 0 or 1
 */

int is_pal_rec(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (is_pal_rec(str, s + 1, e - 1));
	return (1);
}

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: the string params
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);
	if (n == 0)
		return (1);
	return (is_pal_rec(s, 0, n - 1));
}
