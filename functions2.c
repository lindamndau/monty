#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sub - subtracts the top element of the stack from the second top element of the stack.
 *
 */
void sub(stack_t **head, unsigned int counter)
{
	stack_t * stack;
	int length, aux;
	while(stack)
	{
		stack = stack -> next;
		length++;
	}
	if(length < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	stack = head;
	aux = stack -> n - stack -> next -> n;
	stack -> prev -> n = aux;
	stack -> next = NULL;
	free(stack);
}

/**
 * div - divides the second top element of the stack by the top element of the stack.
 *
 */
void div(stack_t **head, unsigned int counter)
{
	stack_t * stack;
	int length, aux;
	while(stack)
	{
		stack = stack -> next;
		length++;
	}
	if(length < 2)
	{
		fprintf(stderr, "L%d : can't div, stack too short", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	stack = *head;
	aux = stack -> n % stack -> next -> n;
	stack -> prev -> n = aux;
	stack -> next = NULL;
	free(stack);
}
/**
 * mul - multiplies the second top element with the top element of the stack
 *
 */
void mul(stack_t **head, unsigned int counter)
{
	stack_t * stack;
	int length, aux;
	while(stack)
	{
		stack = stack -> next;
		length++;
	}
	if(length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	stack = head;
	aux = stack -> n * stack -> next -> n;
	stack -> prev -> n = aux;
	stack -> next = NULL;
	free(stack);
}
/**
 * @ mod -  computes the rest of the division of the second top element of the stack by the top element of the stack.
 * @aux - auxillary viarable that holds the mod value
 */
void mod(stack_t **head, unsigned int counter)
{
	stack_t * stack;
	int length, aux;
	while(stack)
	{
		stack = stack -> next;
		length++;
	}
	if(length < 2)
	{
		fprintf(stderr, "L%d : can't mod, stack too short", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	if(stack -> next -> n == 0)
	{
		fprintf(stderr, "L%d :  division by zero", counter);
		free(stack);
		exit(EXIT_FAILURE);
	}
	stack = head;
	aux = stack -> next -> n % stack -> n;
	stack -> prev -> n = aux;
	stack -> next = NULL;
	free(stack);
}
