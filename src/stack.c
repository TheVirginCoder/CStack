/* 
 *
 * This program is a basic implementation of the Stack data structure in the
 * C programming language. It includes pop and push functionality
 * and uses a typedef for the struct that stores the top of the stack
 * 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 1024 /* Maximum size of the stack */

/* The stack data structure, implemented as a typedef */
typedef struct {
        int data[MAX_STACK_SIZE];
        int top;
} stack;

/* This is a function to initialise the stack structure, returns a pointer */
stack *init_stack(void)
{
        /* Dynamically allocate size of the stack structure */
        stack *new_stack = (stack *)malloc(sizeof(stack));
        new_stack->top = -1; /* Set top to -1 (Empty stack) */

        return new_stack;
}

/* Function to push (add) values to stack */
void push(stack *modstack, int val)
{
        /* Check if the stack is full */
        if (modstack->top < MAX_STACK_SIZE) {
                /* Increment top and add value */
                modstack->top++;
                modstack->data[modstack->top] = val;
        } else {
                /* Print error to stderr if stack is full */
                fprintf(stderr, "Err: Stack full.\n");
        }
}

int main(void)
{
        return 0;
}