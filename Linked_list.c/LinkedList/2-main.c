#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head, *current, *ptr;
	head = malloc(sizeof(listint_t));
	current = malloc(sizeof(listint_t));
	head->n = 5;
	head->next = current;
	
	current->n = 10;
	head->next->next = malloc(sizeof(listint_t));
	head->next->next->n = 15;
	head->next->next->next = NULL;
	
	head = del_first(head);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (0);

}
