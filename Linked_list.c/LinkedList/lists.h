#ifndef PROTOTYPES
#define PROTOTYPES
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
listint_t *add_nodeint_end(listint_t **head, const int n);
void add_at_pos(listint_t *head, int data , int pos);
#endif
