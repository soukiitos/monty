#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>

#define STACK_SIZE 100

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct val_s - args and its contenet
 * @args: An argument
 * @ch: A character
 * @file: monty file
 * @flag_L: A flag
 *
 * Description: Contain values
 */
typedef struct val_s
{
	char *args;
	char *ch;
	FILE *file;
	int flag_L;
} val_t;
extern val_t val;
int _putchar(char c);
void push_pa(stack_t **h, unsigned int size);
void pall_pu(stack_t **h, unsigned int size);
void pint_p(stack_t **h, unsigned int size);
void pop_p(stack_t **h, unsigned int size);
void swap_s(stack_t **h, unsigned int size);
void add_s(stack_t **h, unsigned int size);
void nadd_s(stack_t **h,  int num);
void nop_s(stack_t **h, unsigned int size);
void sub_s(stack_t **h, unsigned int size);
void div_s(stack_t **h, unsigned int size);
void mul_s(stack_t **h, unsigned int size);
void mod_s(stack_t **h, unsigned int size);
int execute(char *ch, stack_t **stack, unsigned int size, FILE *file);
void pchar_s(stack_t **h, unsigned int size);
void pstr_s(stack_t **h, unsigned int size);
void rotl_s(stack_t **h, unsigned int size);
void rotr_s(stack_t **h, __attribute__((unused)) unsigned int size);
void stack_top(stack_t **h, unsigned int size);
void stack_free(stack_t *h);
void queue_top(stack_t **h, unsigned int size);
void nqueue_top(stack_t **h, int num);
char *clear(char *size);

#endif
