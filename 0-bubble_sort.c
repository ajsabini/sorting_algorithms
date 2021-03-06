#include "sort.h"

/**
 * bubble_sort - ordenar(asc) array de ints con metodo burbuja
 * @array: puntero al array
 * @size: largo del array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t k = 0;
	int aux, cent = 0;

	if (!array || size <= 1)
		return;
	while (cent == 0)
	{
		cent = 1;
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				aux = array[k];
				array[k] = array[k + 1];
				array[k + 1] = aux;
				print_array(array, size);
				cent = 0;
			}
		}
	}
}
