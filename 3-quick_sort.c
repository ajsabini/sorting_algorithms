#include "sort.h"
#include <string.h>

/**
 * swap - cambiar de posicon elementos
 * @len: tamaño del array
 * @array: el array
 * @swap_element1: primer elemento
 * @swap_element2: segundo elemento
 * Return: void
 */

void swap(int *array, int *swap_element1, int *swap_element2, size_t len)
{
	int temp = 0;

	temp = *swap_element1;
	*swap_element1 = *swap_element2;
	*swap_element2 = temp;
	if (*swap_element1 != temp)
		print_array(array, len);
}

/**
 * quick_sort_suplement - funcion recursiva para ordenar
 * @array: el array a ordenar
 * @first: primer elemento
 * @last: ultimo elemento
 * @len: tamaño del array
 * Retun: void
 */

void quick_sort_suplement(int *array, size_t first, size_t last, size_t len)
{
	size_t slow = 0, fast = 0, pivot, flag = 0;

	if (first < last)
	{
		fast = slow = first;
		pivot = last;
		while (fast < pivot)
		{
			if (array[fast] <= array[pivot])
			{
				flag = 1;
				swap(array, &array[fast], &array[slow], len);
				slow++;
			}
			fast++;
		}
		swap(array, &array[slow], &array[pivot], len);

		if (flag == 1)
		{
			quick_sort_suplement(array, first, slow - 1, len);
			quick_sort_suplement(array, slow + 1, last, len);
		}
		else
		{
			quick_sort_suplement(array, first, slow, len);
			quick_sort_suplement(array, slow, last, len);
		}
	}
}

/**
 * quick_sort - ordenar(asc) un array de int con quick sort
 * @array: el array a ordenar
 * @size: tamaño del array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_suplement(array, 0, size - 1, size);
}
