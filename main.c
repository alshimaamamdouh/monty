#include "monty.h"

info_t info = {NULL, NULL, NULL};

/**
 * main - main function
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
FILE *file;
char *line = NULL;
size_t len_line = 0;
ssize_t read_line = 1;
unsigned int line_number = 0;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
info.file = file;

if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (read_line > 0)
{
line = NULL;
read_line = getline(&line, &len_line, file);
line_number++;

if (read_line > 0 && !is_line_blank(line))
{
trim_spaces(line);

func_exc(line, &stack, line_number);
}

free(line);
}

free_stack(stack);
fclose(file);
return (0);
}

