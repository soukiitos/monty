#include "monty.h"
/**
 * rotr_s - Rotate the stack to the bottom
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void rotr_s(stack_t **h, __attribute__((unused)) unsigned int size)
{
	stack_t *c;

	c = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	while (c->next)
	{
		c = c->next;
	}
	c->next = *h;
	c->prev->next = NULL;
	c->prev = NULL;
	(*h)->prev = c;
	(*h) = c;
}
