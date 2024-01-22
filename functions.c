#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @push - pushes an element to the top of  stack
 * @integer - integer element to  be added to stack
 *
 */
void push_element(stack_t ** stack, unsigned int counter)
{
	stack_t * new_node = (stack_t*)malloc(sizeof(stack_t));
	if(!isdigit(stack -> n) || !atoi(stack -> n))
	{
		printf("L%d: usage: push integer\n", counter);
		free(new_node);
		EXIT_FAILURE;
	}
	while(!stack)
	{
		stack = stack -> next;
		if(stack -> next == NULL)
		{
			new_node = stack -> next;
			new_node = new_node -> n;
		}
	}
	if(new_node == NULL)
	{
		fprintf("L%d: memory allocation failed\n", counter);
		free(new_node);
		exit(EXIT_FAILURE);
	}
}

/**
 * @Pall - prints all the values on the stack, starting from the top of the stack.
 * If pall fails, prints nothing
 *
 */
void pall_values(stack_t ** stack, unsigned int counter)
{
	int values = 0;
	while(stack != NULL)
	{
		stack = stack -> next;
		for(, stack -> n = values; values--)
		{
			printf("%d\n", values);
		}
	}
	if(stack == NULL)
	{
		fprinf("L%d: usage: push integer", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * @pint_value - prints the value at the top of the stack, followed by a new line.
 * if stack empty EXIT_FAILURE
 *
 */
void pint_value(stack_t ** stack, unsigned int counter)
{
	int value;
	while(!stack)
	{
		stack = stack -> next;
		if(stack -> next == NULL)
		{
			value = stack -> n;
		}
		printf("%d\n", value);
	}
	else
	{
		printf(stderr,"L%d: can't pint, stack empty", counter);
		EXIT_FAILURE;
	}
}
