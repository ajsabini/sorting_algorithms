#include "sort.h"

/**
 * insertion_sort_list - ordenar (asc) una dll de int con insertion sort
 * @list: la lista a ordenar
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *auxHead = NULL, *node = NULL;

	if (*list == NULL || list == NULL)
		return;
	auxHead = *list;
	while (auxHead)
	{
		while (auxHead->prev && (auxHead->n < auxHead->prev->n))
		{
			node = auxHead->prev;
			if (auxHead->prev->prev)
				auxHead->prev->prev->next = auxHead;
			auxHead->prev = auxHead->prev->prev;
			node->next = auxHead->next;
			node->prev = auxHead;
			if (auxHead->next)
				auxHead->next->prev = node;
			auxHead->next = node;
			if (auxHead->prev == NULL)
				*list = auxHead;
			print_list(*list);
		}
		auxHead = auxHead->next;
	}
}
