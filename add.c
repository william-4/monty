#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_cnt)
{
	int sum = 0;
	if (!stack || !(*stack) || !(*stack)->next)
		fprintf(stderr, "L%u: can't add, stack too short", line_cnt);

	sum = (*stack)->n + (*stack)->next->n;
	pop(stack, line_cnt);
	(*stack)->n = sum;
}
