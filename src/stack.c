#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 1024

typedef struct {
        int data[MAX_STACK_SIZE];
        int top;
} stack;

stack init_stack(void)
{
        stack *new_stack = (stack *)malloc(sizeof(stack));
        new_stack->top = -1;
}

int main(void)
{
        return 0;
}