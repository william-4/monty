#include "monty.h"

/**
 * mul - multiplies element 2 by element 1
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_cnt)
{
	int mul_v = 0;
	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short", line_cnt);
		exit(EXIT_FAILURE);
	}
	mul_v = (*stack)->next->n * (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = mul_v;
}
