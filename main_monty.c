#include "monty.h"
val_t val = {NULL, NULL, NULL, 0};
/**
 * main - The main code
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *ch;
	FILE *file;
	ssize_t line;
	size_t s = 0;
	stack_t *stack = NULL;
	unsigned int size = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	val.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	for (line = 1; line > 0; )
	{
		ch = NULL;
		line = getline(&ch, &s, file);
		val.ch = ch;
		size++;
		if (line > 0)
			execute(ch, &stack, size, file);
		free(ch);
	}
	stack_free(stack);
	fclose(file);
	return (0);
}
