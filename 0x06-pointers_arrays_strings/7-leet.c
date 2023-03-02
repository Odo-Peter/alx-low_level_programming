#include "main.h"
/**
 * leet - encodes a string to 1337
 * @c: the params passed to the function
 * Return: chars of string
 */

char *leet(char *c)
{
	char *r = c;
	/*the while loop goes here*/
	while (*c != '\0')
	{
		if (*c == 'a' || *c == 'A')
			*c = '4';
		else if (*c == 'e' || *c == 'E')
			*c = '3';
		else if (*c == 'l' || *c == 'L')
			*c = '1';
		else if (*c == 'o' || *c == 'O')
			*c = '0';
		else if (*c == 't' || *c == 'T')
			*c = '7';
		c++;
	}
	return (r);
}
