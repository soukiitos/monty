#include "monty.h"
/**
 * add_s - Add the top two elements of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void add_s(stack_t **h, unsigned int size)
{
	int a, count = 0;
	stack_t *head;

	head = *h;
	while (head)
	{
		head = head->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d, can't add, stack too short\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	a = head->n + head->next->n;
	head->next->n = a;
	*h = head->next;
	free(head);
}
