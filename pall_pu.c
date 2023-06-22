#include "monty.h"
/**
 * pall_pu - Print all the values on the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void pall_pu(stack_t **h, unsigned int size)
{
	stack_t *head;
	(void)size;

	head = *h;
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
