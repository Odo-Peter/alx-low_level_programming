#include <stdio.h>
/**
 * main - prints the char of the alphabets
 * Return: 0 for success
 */

int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
