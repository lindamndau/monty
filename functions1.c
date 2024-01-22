#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @pop_element - removes the top element of the stack.
 *
 */
void pop(stack_t ** stack, unsigned int counter)
{
	stack_t *tmp = NULL;
	if(*stack == NULL)
	{
		dprintf(2, "L<line_number>: can't pop an empty stack", counter);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	stack = (*stack) -> prev;
	tmp -> prev = NULL;
	free(tmp);
	if(*stack)
	{
		(*stack) -> next; = NULL;
	}
}

/**
 * @swap - swaps the top two elements of the stack.
 *
 */
void swap(stack_t **head, unsigned int counter)
{
	stact_t * tmp = h;
	int length = 0, auxilary;
	while(h)
	{
		h = h -> next;
		length++;
	}
	if(length < 2)
	{
		fprintf("L<line_number>: can't swap, stack too short\n", counter);
		free(head);
		exit(EXIT_FAILURE);
	}
	h = head;
	auxilary = h -> n;
	h -> n = h -> next -> n;
	h -> next -> n = auxilary;
}

/**
 * @add -  the top two elements of the stack.
 *
 */
void add(stack_t ** head, unsigned int counter)
{
	stack_t *stack = head;
	int length = 0, aux;
	while(stack)
	{
		stack = stack -> next;
		length++;
	}
	if(length < 2)
	{
		printf("L<line_number>: can't add, stack too short", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	aux = stack -> n + stack -> next -> n;
	stack -> next -> n = aux;
	head = stack -> next;
	free(stack)
}
