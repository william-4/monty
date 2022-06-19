#include "monty.h"

/**
 * mod - returns modulus of  element 2 by element 1
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void _mod(stack_t **stack, unsigned int line_cnt)
{
	int mod_v = 0;
	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
	}
	mod_v = (*stack)->next->n % (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = mod_v;
}
