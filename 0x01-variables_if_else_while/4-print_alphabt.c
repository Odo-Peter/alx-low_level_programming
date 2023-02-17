#include <stdio.h>
/**
 * main - prints out the chars except q and e
 * Return: 0 for success
 */

int main(void)
{
	char a;

	/*The for loop for the alphabets*/
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
