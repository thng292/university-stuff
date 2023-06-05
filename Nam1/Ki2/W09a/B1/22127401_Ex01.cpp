#include <stdio.h>

#include "Stack.h"

int main()
{
    Stack<int> stack;
    Init(stack, 10);
    for (int i = 0; i < 20; ++i) {
        Push(stack, i);
    }
    size_t n = Size(stack);
    printf_s("Stack:\n");
    for (size_t i = 0; i < n; i++) {
        printf_s("%d ", stack.data[i]);
    }
    printf_s("\n");
    while (!IsEmpty(stack)) {
        printf_s("Poped: %d\n", Pop(stack));
    }
    Empty(stack);
    printf_s("Stack cleared.\n");
    return 0;
}