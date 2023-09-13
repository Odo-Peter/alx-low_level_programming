#include "search_algos.h"


/**
 * recursive_binary - recusrive algorithm for binary search
 * @array: pointer to first position
 * @size: length of array
 * @value: element to search
 * Return: index of value
 */
size_t recursive_binary(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t aux;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (aux = 0; aux < size; aux++)
		printf("%d%s", array[aux], (aux != size - 1) ? ", " : "\n");

	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (recursive_binary(array, mid, value));

	mid++;
	return (recursive_binary(array + mid, size - mid, value) + mid);
}


/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first position of an array list
 * @size: length of array
 * @value: value to search
 * Return: index of the value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int result;

	result = recursive_binary(array, size, value);

	if (result >= 0 && array[result] != value)
		return (-1);
	return (result);
}
