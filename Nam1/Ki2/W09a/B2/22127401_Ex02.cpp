#include <stdio.h>

#include "Stack.h"

int main()
{
    Stack<int> stack;
    Init(stack, 10);
    for (int i = 0; i < 10; i++) {
        Push(stack, i);
    }
    printf_s("Stack: \n");
    auto h = stack.data;
    while (h) {
        printf_s("%d ", h->data);
        h = h->next;
    }
    printf_s("\n");
    size_t size = Size(stack);
    printf_s("Size: %d\n", size);
    for (size_t i = 0; i < size; i++) {
        printf_s("Poped: %d\n", Pop(stack));
    }
    printf_s("\n");
    Empty(stack);
    printf_s("Stack cleared.\n");
    return 0;
}