#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*listint_t *add_nodeint_end(listint_t **head, const int n);*/

int main(void)
{
	listint_t *head = malloc(sizeof(listint_t));
	head->n = 45;
	head->next = NULL;
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 3);

	int data = 67, position = 3;

	add_at_pos(head, data, position);
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		printf("%d ", ptr->n);
		ptr = ptr->next;
	}
	return 0;
}
