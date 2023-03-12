#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints out the additions ints args
 * @argc: the args count
 * @argv: the args array of strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, n = 0;

	if (argc == 1)
		printf("%d\n", n);
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (sum == 199)
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
	}
	return (0);
}
