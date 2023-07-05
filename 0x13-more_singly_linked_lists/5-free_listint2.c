#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: pointer to listint_t list to freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
