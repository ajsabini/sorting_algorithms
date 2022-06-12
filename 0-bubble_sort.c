#include "sort.h"

/**
 * bubble_sort - ordenar(asc) array de ints con metodo burbuja
 * @array: puntero al array
 * @size: largo del array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k = 0;
	int aux = 0;
	
	if (!array)
		return;
	if (size == 1)
		return;

	for (i = 0; i < size - i - 1; ++i)
	{
		for (k = 0; k < size - 1; ++k)
		{
			if (array[k] > array[k + 1])
			{
				aux = array[k];
				array[k] = array[k + 1];
				array[k + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
