#include "monty.h"

/**
 * opcode - function to compare the token and run the appropriate built-in
 * @stack: stack declared in main
 * @line_cnt: the line number
 *
 * Return: nothing
 */
void opcode(stack_t **stack, unsigned int line_cnt)
{
	int i = 0;

	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode != NULL; i++) /* condition to end loop */
	{
		if (strcmp(ops[i].opcode, token) == 0)
		{
			ops[i].f(stack, line_cnt);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, token);
	exit(EXIT_FAILURE);

}
