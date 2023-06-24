#include "monty.h"
/**
 * pchar_s - Print the char at the top of the stack, followed by a new line
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void pchar_s(stack_t **h, unsigned int size)
{
	stack_t *head;

	head = *h;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
