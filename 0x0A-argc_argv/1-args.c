#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of args
 * @argc: the args count
 * @argv: the array of args string
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
