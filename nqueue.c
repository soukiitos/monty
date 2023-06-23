#include "monty.h"
/**
 * nqueue_top - add node to the top
 * @h: A pointer
 * @num: A number
 *
 * Return: 0
 */
void nqueue_top(stack_t **h, int num)
{
	stack_t *a, *node;

	a = *h;
	node = (stack_t *) malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = num;
	node->next = NULL;
	if (a)
	{
		while (a->next)
		{
			a = a->next;
		}
	}
	if (a)
	{
		a->next = node;
		node->prev = a;
	}
	else
	{
		*h = node;
		node->prev = NULL;
	}
}
