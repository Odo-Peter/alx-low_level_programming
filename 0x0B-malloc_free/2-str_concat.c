#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * null_checker - checks if either or the two strings is null
 * @str_1: the first string params
 * @str_2: the second string params
 * @new_str: points to the malloc
 * Return: a pointer to the string
 */

char *null_checker(char *str_1, char *str_2, char *new_str);

/**
 * str_concat - concatenates two strings
 * @s1: the first string params
 * @s2: the second string params
 * Return: a pointer to a string
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	size_t len1 = s1 == NULL ? 0 : strlen(s1);
	size_t len2 = s2 == NULL ? 0 : strlen(s2);
	size_t t_len = len1 + len2;
	size_t i, j;

	c_str = malloc((t_len) * sizeof(char) + 1);
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
	if (s2 == NULL || s1 == NULL)
	{
		null_checker(s1, s2, c_str);
	}
	if (s1 == NULL && s2 == NULL)
	{
		null_checker(s1, s2, c_str);
	}
	return (c_str);
}

/**
 * null_checker - checks if either or the two strings is null
 * @str_1: the first string params
 * @str_2: the second string params
 * @new_str: points to the malloc
 * Return: a pointer to the string
 */

char *null_checker(char *str_1, char *str_2, char *new_str)
{
	size_t i;

	if (str_2 == NULL)
	{
		str_2 = "";
		for (i = 0; i < strlen(str_1) + 1; i++)
		{
			new_str[i] = str_1[i];
		}
		new_str[strlen(str_1)] = '\0';
	}
	if (str_1 == NULL)
	{
		str_1 = "";
		for (i = 0; i < strlen(str_2) + 1; i++)
		{
			new_str[i] = str_2[i];
		}
		new_str[strlen(str_2)] = '\0';
	}
	if (new_str == NULL)
	{
		free(new_str);
		return(NULL);
	}
	return (new_str);
}
