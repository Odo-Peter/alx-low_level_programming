#include <stdio.h>
/**
 * main - prints out the sizes of data types
 *Return: 0 for success
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int n;
	float f;

	printf("Size of a char: %lu, \n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu, \n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu, \n" (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu, \n", (unsigned long)sizeof(n);
	printf("Size of a float: %lu, \n", (unsigned long)sizeof(f));

	return (0);
}
