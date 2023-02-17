#include <stdio.h>
/**
 * main - prints the alphabets in small caps
 * Return: 0 for a successfully execution
 */
int main(void)
{
        char a;
	for (a = 'a'; a < 'z'; a++)
	{
		putchar("%c\n", a);
	}
	return (0);
}
