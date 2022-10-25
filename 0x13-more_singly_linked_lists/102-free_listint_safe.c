#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a list that may or may not loop,
 * set start of list to NULL
 * @h: Pointer to pointer to the start of the list
 * Return: size of free'd list (in nodes?)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodeCount = 0;
	listint_t *temp = NULL;

	if (!(h && *h))
		return (nodeCount);
	while (*h)
	{
		nodeCount++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (nodeCount);
}
