#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node in the list
 * @n: data to be added
 * Return: pointer of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
