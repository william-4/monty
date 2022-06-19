#include "monty.h"

/**
 * _isdigit - checks that a string only contains digits
 * @str: string to check
 *
 * Return: 0 if only digits, else 1
 */
static int _isdigit(char *str)
{
	if (!str || *str == '\0') /* checks if argument is given to push */
		return (0);

	if (*str == '-')
		str++;
	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}


/**
 * push - pushes an element to the stack
 * @stack: the stack in main function
 * @line_cnt: the line number
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_cnt)
{
	int a;

	if ((_isdigit(argument)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		printf("_isdigit prints %d\n", _isdigit(argument)); /* _isdigit returns 1 */
		exit(EXIT_FAILURE);
	}
	a = atoi(argument);
	if ((!add_node(stack, a)))
		exit(EXIT_FAILURE);
}
