#pragma once
#include <iostream>

enum { STACK_SIZE_STEP = 25 };

template <typename T>
struct Stack {
    T* data;
    size_t top = 0;
    size_t capacity = 0;
};

template <typename T>
void Init(Stack<T>& stack, size_t size)
{
    stack.data = new T[size];
    stack.capacity = size;
}

template <typename T>
void Push(Stack<T>& stack, const T& value)
{
    if (stack.top == stack.capacity) {
        T* newData = new T[stack.capacity + STACK_SIZE_STEP];
        for (size_t i = 0; i < stack.top; ++i) {
            newData[i] = stack.data[i];
        }
        delete[] stack.data;
        stack.data = newData;
        stack.capacity += STACK_SIZE_STEP;
    }
    stack.data[stack.top++] = value;
}

template <typename T>
T Pop(Stack<T>& stack)
{
    return stack.data[--stack.top];
}

template <typename T>
bool IsEmpty(const Stack<T>& stack)
{
    return stack.top == 0;
}

template <typename T>
void Empty(Stack<T>& stack)
{
    stack.top = 0;
    stack.capacity = 0;
    delete[] stack.data;
}

template <typename T>
size_t Size(const Stack<T>& stack)
{
    return stack.top;
}
