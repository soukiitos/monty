#include "monty.h"
/**
 * mod_s - Compute the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void mod_s(stack_t **h, unsigned int size)
{
	int a, count;
	stack_t *head;

	head = *h;
	for (count = 0; head; count++)
	{
		head = head->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	a = head->next->n % head->n;
	head->next->n = a;
	*h = head->next;
	free(head);
}
