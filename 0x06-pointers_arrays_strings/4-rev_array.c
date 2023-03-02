#include "main.h"
/**
 * reverse_array - prints an array in reverse
 * @a: the array params
 * @n: the second params
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int *s = a;
	int *e = a + (n - 1);
	/*some computations below*/
	while (s < e)
	{
		int t = *s;
		/*more computations*/
		*s = *e;
		*e = t;
		s++;
		e++;
	}
}
