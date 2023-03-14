#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: the first string params
 * @s2: the second string params
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	size_t len1 = s1 == NULL ? 0 : strlen(s1);
	size_t len2 = s2 == NULL ? 0 : strlen(s2);
	size_t t_len = len1 + len2;
	size_t i, j;

	c_str = (char *)malloc((t_len) * sizeof(char) + 1);
	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			c_str[i] = s1[i];
		}
		if (strlen(c_str) == len1)
		{
			for (j = 0; j < len2 + 1; j++)
			{
				c_str[len1 + j] = s2[j];
			}
		}
		c_str[t_len] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = "";
		for (i = 0; i < len1 + 1; i++)
		{
			c_str[i] = s1[i];
		}
		c_str[len1] = '\0';
	}
	if (s1 == NULL)
	{
		s1 = "";
		for (i = 0; i < len2 + 1; i++)
		{
			c_str[i] = s2[i];
		}
		c_str[len2] = '\0';
	}
	return (c_str);
}
