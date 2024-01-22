#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pchar -  prints the char at the top of the stack, followed by a new line.
 *
 */
void pchar(stack_t **head, unsigned int count)
{
	stack_t * stack = *head;
	if(stack == NULL)
	{
		fprintf("L%d : can't pchar, stack empty", count);
		free(stack);
		exit(EXIT_FAILURE);
	}
	if(head -> n >= 32 && head -> n <= 126)
	{
		printf("%c\n", head -> n);
	}
	else
	{
		fprintf("L%d : can't pchar, value out of range", count);
		free(stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * @pstr - prints the string starting at the top of the stack, followed by a new line.
 *
 */
void pstr(stack_t **head, unsigned int count)
{
	stack_t * stack;
	while(stack)
	{
		stack = stack -> next;
		if(stack -> n >= 1 && <= 127)
		{
			printf("%c\n", stack->n);
		}
		else
		{
			if(stack -> n == 0 || stack -> next == NULL)
			{
				break;
			}
		}

	}
	if(stack == NULL)
	{
		fprintf("\n", count);
	}
}

/**
 * rotl - rotates the stack to the top.
 *
 */
void rotl(stack_t **stack, unsigned int count)
{
	stack_t * stack_r;
	stack_t * stack_l;
	(void) count;
	if(!stack || !*stack || !(*stack)->next)
	{
		return;
	}
	stack_l = stack_r = * stack;
	while(stack_r -> next)
	{
		stack_r = stack_R -> next;
	}
	stack_r -> next = stack_l;
	stack_l -> prev = stack_r;
	*stack = stack_l -> next;
	(*stack) -> prev -> next = NULL;
	(*stack) -> prev = NULL;
}




