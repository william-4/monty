#include "monty.h"

/* global variable declarations */
char *token;
char *argument;
/**
 * main - entry point of the monty program
 * @argc: count of args
 * @argv: string array of arguments passed to main
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL;
	size_t line_len = 0;
	unsigned int line_cnt = 0;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((getline(&line, &line_len, file)) != (-1))
	{
		line_cnt++;
		token = strtok(line, " \t\n\r");
		if (!token || token[0] == '#')
		{
			free(line);
			continue;
		}
		argument = strtok(NULL, " \t\n\r");
		opcode(&stack, line_cnt);
	}
	free(line);
	free_list(stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}
