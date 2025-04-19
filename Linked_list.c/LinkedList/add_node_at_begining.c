#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct node
{
	int number;
	struct node *link;
}list_t;

void add_beg(list_t **head, int data);


int main(void)
{
	list_t *head, *current;
	head = malloc(sizeof(list_t));
	current = malloc(sizeof(list_t));
	head->number = 5;
	head->link = current;
	current->number = 10;
	current->link = NULL;

	/*while(head != NULL)
	{
		printf("number: %d\n", head->number);
		head = head->link;
	}*/
	add_beg(&head, 1);
	/*head = add_beg(&head, 0);
	head = add_beg(&head, 'a');*/

	while(head != NULL)
        {
                printf("number: %d\n", head->number);
                head = head->link;
        }

	return 0;
}

void add_beg(list_t **head, int data)
{
	list_t *ptr = malloc(sizeof(list_t));
	ptr->number = data;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;

	/*return *head;*/
}
