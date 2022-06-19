#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main
 * @line_cnt: line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt)
{
	(void)line_cnt;
	if (*stack)
		print_node(*stack);
}
