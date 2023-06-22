#include "monty.h"
/**
 * pop_p - Remove the top element of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void pop_p(stack_t **h, unsigned int size)
{
	stack_t *head;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	*h = head->next;
	free(head);
}
