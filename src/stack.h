#ifndef STACK_H
#define STACK_H

#define STACK_EMPTY -1

/* The stack data structure, implemented as a typedef */
typedef struct {
        int *data;
        int top;
        int size;
} stack;

extern stack *init_stack(int stack_size);
extern void push(stack *mod_stack, int val);
extern void dispose_stack(stack *finished_stack);
extern int pop(stack *mod_stack);

#endif
