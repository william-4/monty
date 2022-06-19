#include "monty.h"

/**
 * pint - print the value at the to of the stack
 * @stack: stack passed in by main.c
 * @line_cnt: the line number
 *
 * Return: void
 */
void pint (stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
