#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns ptr to a duplicated string
 * @str: the string params
 * Return: ptr to str or NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	size_t len = strlen(str);
	size_t i;

	new_str = (char *)malloc(len * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len + 1; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
