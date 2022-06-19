#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void swap (stack_t **stack, unsigned int line_cnt)
{
	int n = 0;
	stack_t *tmp = NULL;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	n = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = n;
}
