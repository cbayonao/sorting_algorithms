#include "sort.h"
/**
 * insertion_sort_list - function for insertion_sort_list
 *@list: listint_t type, is the list for sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *tmp1 = NULL;
	listint_t *tmp2 = NULL;
	listint_t *tmp3 = NULL;
	listint_t *current = *list;

	while(current)
	{
		if (current->prev && current->n > current->prev->n)
		{
			tmp1 = current->prev->prev;
			tmp2 = current->prev;
			tmp3 = current;
			sorted = current->next;
			tmp2->next = sorted;
			if (sorted)
				sorted->prev = tmp2;
			tmp3->next = tmp2;
			tmp3->prev = tmp1;
			if (tmp1)
			{
				tmp1->next = tmp3;
			}
			else
				*list = tmp3;
			tmp2->prev = tmp3;
			current = *list;
			print_list(* list);
			continue;
		}
		else
			current = current->next;
	}
}
