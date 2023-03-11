#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the name of the first argv
 * @argc: the args count
 * @argv: array of commands in string format
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
