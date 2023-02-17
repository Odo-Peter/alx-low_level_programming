#include <stdio.h>
/**
 * main - prints the alphabets in small caps
 * Return: 0 for a successfully execution
 */
int main(void)
{
	char a;

	/*Comments for the for loop*/
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
