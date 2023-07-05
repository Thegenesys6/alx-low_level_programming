#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: linked list to search for
 *
 * Return: address of node where loop starts, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
