#include "monty.h"

/**
 * sub - subtract top element from second top element and
 * store value in second top element then delet top element
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_cnt)
{
	int sub_v = 0;

	if (!stack || !(*stack) || !(*stack)->next)
		fprintf(stderr, "L%u: can't sub, stack too short", line_cnt);

	sub_v = (*stack)->next->n - (*stack)->n;
	pop(stack, line_cnt);
	(*stack)->n = sub_v;
}
