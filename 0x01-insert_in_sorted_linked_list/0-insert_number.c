#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 *
 * @head: Pointer To First Node.
 * @number: Number To Insert.
 * Return: a listint_t*
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp = *head, *new, *saveNextNode;
	int x = 0, i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	for (; tmp != NULL; x++)
	{
		if (tmp->n >= number)
		{
			break;
		}
		tmp = tmp->next;
	}
	tmp = *head;
	if (x == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	for (; tmp != NULL; i++)
	{
		if (x == i + 1)
		{
			saveNextNode = tmp->next;
			new->next = saveNextNode;
			tmp->next = new;
			tmp = *head;
			return (new);
		}
		tmp = tmp->next;
	}
	tmp = *head;
	return (NULL);
}
