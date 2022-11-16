#include "function_pointers.h"
/**
 * array_iterator - a function given as a
 * parameter on each aray element
 *
 * @array: array to execute func on
 * @size: size of array
 * @action: pointer to be used by funtion
 *
 * Return: void
 */
void arry_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && actiion)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
