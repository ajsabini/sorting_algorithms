#include "sort.h"

/**
 * selection_sort - ordenar(asc) un array de int con selection sort
 * @array: el array a ordenar
 * @size: el largo del array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	int temp, menorPos, imprime = 0;
	size_t i, j = 0;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		menorPos = i;
		imprime = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[menorPos])
			{
				menorPos = j;
				imprime = 1;
			}
		}
		temp = array[i];
		array[i] = array[menorPos];
		array[menorPos] = temp;
		if (imprime)
			print_array(array, size);
	}
}
