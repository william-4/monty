#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: the stack passed by main
 * @line_cnt: the line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_cnt)
{
	stack_t *tmp = NULL;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
	free(tmp);
}
