#include "monty.h"

/**
 * _div - divides element 2 by element 1
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_cnt)
{
	int div_v = 0;

	if (!stack || !(*stack) || !(*stack)->next)
		fprintf(stderr, "L%u: can't div, stack too short", line_cnt);
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_cnt);
		exit(EXIT_FAILURE);
	}

	div_v = (*stack)->next->n / (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = div_v;
}
