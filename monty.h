#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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
 * struct info_s - information
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * Description: carries values through the program
 */
typedef struct info_s
{
	char *arg;
	FILE *file;
	char *content;
}  info_t;
extern info_t info;
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void func_exc(char *opcode, stack_t **stack, unsigned int line_number);
void free_stack(stack_t *head);
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pin(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
int CheckStringNumber(char src);
void _addnode(stack_t **stack, int data);
ssize_t my_getline(char **lineptr, size_t *n, FILE *stream);
int is_line_blank(const char *line);
void trim_spaces(char *str);
#endif
