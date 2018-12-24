#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
        /* Testing the functionality */
        stack *test_stack = init_stack();
        int i, j;

        for (i = 1; i < 6; ++i) {
                push(test_stack, i);
        }

        for (j = 0; j < 5; ++j) {
                printf("%d\n", pop(test_stack));
        }

        puts("Lift off!");

        free(test_stack);
        return 0;
}
