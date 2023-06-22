#include "monty.h"
/**
 * rotl_s - Rotate the stack to the top
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void rotl_s(stack_t **h, __attribute__((unused)) unsigned int size)
{
	stack_t *a, *b = *h;

	if (*h == NULL || (*h)->next == NULL)
		return;
	a = (*h)->next;
	a->prev = NULL;
	while (b->next != NULL)
	{
		b = b->next;
	}
	b->next = *h;
	(*h)->next = NULL;
	(*h)->prev = b;
	(*h) = a;
}
