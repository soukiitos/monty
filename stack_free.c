#include "monty.h"
/**
 * stack_free - Free stacks
 * @h: A pointer
 *
 * Return: 0
 */
void stack_free(stack_t *h)
{
	stack_t *a;

	a = h;
	while (h)
	{
		a = h->next;
		free(h);
		h = a;
	}
}
