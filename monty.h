#ifndef MONTY_H
#define MONTY_H
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#define INSTRUCTIONS { \
		{"push", push},\
		{"pall", pall},\
		{"pint", pint},\
		{"pop", pop},\
		{"swap", swap},\
		{"nop", nop},\
		{"div", _div},\
		{"mul", _mul},\
		{"add", _add},\
		{"sub", _sub},\
		{"mod", mod},\
		{"pchar", pchar},\
		{"pstr", pstr},\
		{"rotl", rotl},\
		{"rotr", rotr},\
		{NULL, NULL} \
}
void push(stack_t **stack, unsigned int counter;
void pall(stack_t **stack, unsigned int counter);
void pint(stack_t **stack, unsigned int counter);
void swap(stack_t **stack, unsigned int counter);
void pop(stack_t **stack, unsigned int counter);
void nop(stack_t **stack, unsigned int counter);
void _div(stack_t **stack, unsigned int counter);
void _add(stack_t **stack, unsigned int counter);
void _sub(stack_t **stack, unsigned int counter);
void _mul(stack_t **stack, unsigned int counter);
void mod(stack_t **stack, unsigned int counter);
void pchar(stack_t **stack, unsigned int counter);
void pstr(stack_t **stack, unsigned int counter);
void rotl(stack_t **stack, unsigned int counter);
void rotr(stack_t **stack, unsigned int counter);
void opcode(stack_t **stack, char *str, unsigned int line_counter);
#endif /* MONTY_H */
