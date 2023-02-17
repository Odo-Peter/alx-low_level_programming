#include <stdio.h>
/**
 * main - prints the char of the alphabets
 * Return: 0 for success
 */

int main(void)
{
	char a;
	char A;
	for(a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		for (A = 'A'; A <= 'Z'; A++)
		{
			putchar(A);
		}
	}
	putchar('\n');
	return (0);
}
