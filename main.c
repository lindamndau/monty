#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void file_err(char *argv);
void error(void);
/**
 * @main - main program( entry point)
 *
 */
int main(int argc, char **argv)
{
	FILE *file;
	size_t buff_length = 0;
	char *buffer = NULL;
	char *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_counter = 1;

	global.data_struct = 1;
	if (argc != 2)
	{
		error();
	}

	file = fopen(argv[1], "r");

	if (!file)
	{
		file_error(argv[1]);
	}
	while (getline(&buffer, &buff_length, file) != -1)
	{
		if (status)
		{
			break;
		}
		if (*buffer == '\n')
		{
			line_counter++;
			continue;
		}
		str = strtok(buffer, " \t\n");
		if (!str || *str == '#')
		{
			line_counter++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n");
		opcode(&stack, str, line_counter);
		line_counter++;
	}
	free(buffer);
	free_stack(stack);
	fclose(file);
	exit(status);
}
/**
 * error - prints usage message and exits
 *
 * Return: nothing
 */
void error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * file_err - prints file error message and exits
 * @argv: argv given by manin
 *
 * Return: nothing
 */
void file_err(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}
