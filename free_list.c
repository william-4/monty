#include "monty.h"

/**
 * free_list - Frees a doubly linked list
 * @stack: Stack passed by main
 */

void free_list(stack_t *stack)
{
	stack_t *h;

	while (stack != NULL)
	{
		h = stack;
		stack = stack->next;
		free(h);
	}
}
