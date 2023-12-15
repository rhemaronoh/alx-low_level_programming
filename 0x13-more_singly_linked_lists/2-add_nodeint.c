#include "lists.h"

/**
 * add_nodeint - adds a new noe at the beginning of a listint_t list
 * @head: pointer to the adress of the head of listint_t list
 * @n: integer for the new node to contain
 * Return: address of the new element otherwise NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
