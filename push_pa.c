#include "monty.h"
/**
 * push_pa - Push elements to the stack
 * @h: A poiter
 * @size: The size
 *
 * Return: 0
 */
void push_pa(stack_t **h, unsigned int size)
{
	int i, j = 0, c;

	if (!val.args)
	{
		fprintf(stderr, "L%d: usage: push integer\n", size);
		fclose(val.file);
		free(val.ch);
		stack_free(*h);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (val.args[0] == '-')
		{
			j++;
		}
		for (; val.args[j] != '\0'; j++)
		{
			if (val.args[j] > 57 || val.args[j] < 48)
			{
				c = 1;
			}
		}
		if (c == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", size);
			fclose(val.file);
			free(val.ch);
			stack_free(*h);
			exit(EXIT_FAILURE);
		}
	}
	i = atoi(val.args);
	if (val.flag_L == 0)
	{
		nadd_s(h, i);
	}
	else
		nqueue_top(h, i);
}
