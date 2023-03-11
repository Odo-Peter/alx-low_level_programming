#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out the mul value of two ints
 * @argc: the args count
 * @argv: the args array of strings
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc - 1 > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else if (argc - 1 == 1)
	{
		printf("Error\n");
		return (1);
	}
	printf("Error\n");
	return (1);
}
