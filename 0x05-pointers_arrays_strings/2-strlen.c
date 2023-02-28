#include "main.h"
/**
 * _strlen - prints out the length of a string
 * @s: the pointer to the char params
 * Return: the length of the str
 */

int _strlen(char *s)
{
	int l = 0;
	/*some computations below*/
	char *t = s;
	/*some other computations goes here*/
	while (*t != '\0')
	{
		l++;
		t++;
	}
	return (l);
}
