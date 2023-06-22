#include "monty.h"
/**
 * mul_s - Multiply the second top element of the stack
 * with the top element of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void mul_s(stack_t **h, unsigned int size)
{
	stack_t *head;
	int a, count;

	head = *h;
	for (count = 0; head; count++)
	{
		head = head->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	a = head->next->n * head->n;
	head->next->n = a;
	*h = head->next;
	free(head);
}
