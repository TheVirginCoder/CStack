#ifndef STACK_H
#define STACK_H

#define MAX_STACK_SIZE 1024 /* Maximum size of the stack */

/* The stack data structure, implemented as a typedef */
typedef struct {
        int data[MAX_STACK_SIZE];
        int top;
} stack;

extern stack *init_stack(void);
extern void push(stack *mod_stack, int val);
extern int pop(stack *mod_stack);


#endif
