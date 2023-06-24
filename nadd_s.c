#include "monty.h"
/**
 * nadd_s - Add nodes
 * @h: A pointer
 * @num: A number
 *
 * Return: 0
 */
void nadd_s(stack_t **h, int num)
{
	stack_t *a, *node;

	a = *h;
	node = (stack_t *) malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (a)
	{
		a->prev = node;
	}
	node->n = n;
	node->next = *h;
	node->prev = NULL;
	*h = node;
}
