#include "monty.h"

/**
 * add_node - adds a node to the start of a stack_t stack
 * @stack: head of the stack
 * @n: integer to be added
 *
 * Return: address of the new node, if fail return NULL
 */
stack_t *add_node(stack_t **stack, int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = *stack;
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;

	*stack = new;

	return (*stack);
}
