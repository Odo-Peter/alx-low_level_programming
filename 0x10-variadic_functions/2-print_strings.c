#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings to the stdout
 * @separator: demacates the string being printed
 * @n: the number of args passed to the function
 * @...: the spread parmas
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
