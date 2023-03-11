#include <stdio.h>
/**
 * main - prints all the args recieved
 * @argc: args count
 * @argv: args string array
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
