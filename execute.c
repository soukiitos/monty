#include "monty.h"
/**
 * execute - Execute the opcodes
 * @ch: A character
 * @stack: A pointer
 * @size: The size
 * @file: A monty file
 *
 * Return: 0
 */
int execute(char *ch, stack_t **stack, unsigned int size, FILE *file)
{
	unsigned int i = 0;
	instruction_t strop[] = {
		{"push", push_pa}, {"pall", pall_pu},
		{"pint", pint_p}, {"pop", pop_p},
		{"swap", swap_s}, {"add", add_s},
		{"nop", nop_s}, {"sub", sub_s},
		{"div", div_s},
		{"mul", mul_s},
		{"mod", mod_s},
		{"pchar", pchar_s},
		{"pstr", pstr_s},
		{"rotl", rotl_s},
		{"rotr", rotr_s},
		{"queue", queue_top},
		{"stack", stack_top},
		{NULL, NULL}
	};
	char *op;

	op = strtok(ch, " \n\t");
	if (op && op[0] == '#')
		return (0);
	val.args = strtok(NULL, " \n\t");
	for (i = 0; strop[i].opcode && op; i++)
	{
		if (strcmp(op, strop[i].opcode) == 0)
		{
			strop[i].f(stack, size);
			return (0);
		}
	}
	if (op && strop[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", size, op);
		fclose(file);
		free(ch);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
