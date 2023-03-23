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

	if (separator == NULL)
		return;

	va_start(args, n);
	if (args == NULL)
		printf("nil\n");
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
