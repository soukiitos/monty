#include "monty.h"
/**
 * sub_s - Substract the top element of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void sub_s(stack_t **h, unsigned int size)
{
	int s, new = 0;
	stack_t *a;

	a = *h;
	while (a != NULL)
	{
		a = a->next;
		new++;
	}
	if (new < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	a = *h;
	s = a->next->n - a->n;
	a->next->n = s;
	*h = a->next;
	free(a);
}
