#include "monty.h"
/**
 * pint_p - Print the value at the top of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void pint_p(stack_t **h, unsigned int size)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);
}
