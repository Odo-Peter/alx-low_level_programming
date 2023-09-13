#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array list of
 * integers using the Jump search algorithm method
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, pr;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	pr = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		pr = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", pr, index);

	for (; pr <= index && pr < (int)size; pr++)
	{
		printf("Value checked array[%d] = [%d]\n", pr, array[pr]);
		if (array[pr] == value)
			return (pr);
	}

	return (-1);
}
