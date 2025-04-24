#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t * del_first(listint_t *head)
{
	if (head == NULL)
	{
		printf("List is already empty");
	}
	else
	{
		listint_t *temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
	return head;
}
