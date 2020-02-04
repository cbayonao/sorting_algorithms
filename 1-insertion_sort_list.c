#include "sort.h"
/**
 * insertion_sort_list - function for insertion_sort_list
 *@list: listint_t type, is the list for sort
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL, *temp = NULL;

	head = *list;

	while (head != NULL)
	{
		temp = head;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
			}
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev == NULL)
			{
				*list = temp;
			}
			else
			{
				temp->prev->next = temp;
			}
			print_list(*list);

		}
		head = head->next;
	}

}
