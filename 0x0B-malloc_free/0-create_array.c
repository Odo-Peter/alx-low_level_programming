#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the char to initialize the char
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
	free(arr);
}
