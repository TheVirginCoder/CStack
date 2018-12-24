/* 
 *
 * This program is a basic implementation of the Stack data structure in the
 * C programming language. It includes pop and push functionality
 * and uses a typedef for the struct that stores the top of the stack
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* This is a function to initialise the stack structure, returns a pointer */
stack *init_stack(int stack_size)
{
        /* Dynamically allocate size of the stack structure */
        stack *new_stack = (stack *)malloc(sizeof(stack));
        new_stack->data = (int *)malloc(sizeof(int) * stack_size);
        new_stack->top = -1; /* Set top to -1 (Empty stack) */
        new_stack->size = stack_size;

        return new_stack;
}

void dispose_stack(stack *finished_stack)
{
        free(finished_stack->data);
        free(finished_stack);
}

/* Function to push (add) values to stack */
void push(stack *mod_stack, int val)
{
        /* Check if the stack is full */
        if (mod_stack->top < mod_stack->size) {
                /* Increment top and add value */
                mod_stack->top++;
                mod_stack->data[mod_stack->top] = val;
        } else {
                /* Print error to stderr if stack is full */
                fprintf(stderr, "Err: Stack full.\n");
        }
}

/* Function to pop (remove) value from the stack */
int pop(stack *mod_stack)
{
        /* Check if stack contains data */
        if (mod_stack->top < 0) {
                fprintf(stderr, "Err: Stack empty.\n");
        } else {
                /* return the found data */
                return mod_stack->data[mod_stack->top--];
        }

        /* return failure */
        return -1;
}
