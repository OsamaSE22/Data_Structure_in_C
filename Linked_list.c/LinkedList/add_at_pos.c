#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
void add_at_pos(listint_t *head, int data , int pos)
{
	int i;
	listint_t *ptr = head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	ptr2->n = data;
	ptr2->next = NULL;


	/*pos--;*/
	i = 1;
	while(i != pos)
	{
		ptr = ptr->next;
		i++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;

}
