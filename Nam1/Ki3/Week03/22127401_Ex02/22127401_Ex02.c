#include <stdio.h>
#include "stack.h"

int main(void) {
    int length = 100;
    Stack* stack = Stack_Init();
    for (int i = 0; i < length; i++) {
        Stack_Push(stack, i);
    }
    while (!Stack_IsEmpty(stack)) {
        printf("%d, ", Stack_Pop(stack));
    }
    Stack_Destroy(stack);
    return 0;
}

