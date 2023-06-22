#include "monty.h"
/**
 * pstr_s - Print the string starting at the top of the stack
 * @h: A pointer
 * @size: The size
 *
 * Return: 0
 */
void pstr_s(stack_t **h, unsigned int size)
{
	stack_t *head;
	(void)size;

	head = *h;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
