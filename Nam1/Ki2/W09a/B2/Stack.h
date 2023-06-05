#pragma once
#include <vcruntime.h>

#include <cstddef>

namespace {
    template <typename T>
    struct Node {
        T data;
        Node* next = nullptr;
    };

    template <typename T>
    size_t NSize(Node<T>* node)
    {
        int size = 0;
        while (node) {
            size++;
            node = node->next;
        }
        return size;
    }

    template <typename T>
    void PushHead(Node<T>*& phead, const T& data)
    {
        Node<T>* node = new Node<T>;
        node->data = data;
        node->next = phead;
        phead = node;
    }

    template <typename T>
    void FreeNode(Node<T>* node)
    {
        delete node;
    }

    template <typename T>
    void FreeList(Node<T>* node)
    {
        while (node) {
            Node<T>* next = node->next;
            FreeNode(node);
            node = next;
        }
    }
}  // namespace

template <typename T>
struct Stack {
    Node<T>* data = nullptr;
    size_t capacity = 0;
};

template <typename T>
void Init(Stack<T>& stack, size_t size)
{
    stack.capacity = size;
}

template <typename T>
void Push(Stack<T>& stack, const T& value)
{
    if (NSize(stack.data) == stack.capacity) {
        return;
    }
    PushHead(stack.data, value);
}

template <typename T>
T Pop(Stack<T>& stack)
{
    if (!stack.data) {
        return T();
    }
    T data = stack.data->data;
    Node<T>* node = stack.data;
    stack.data = stack.data->next;
    FreeNode(node);
    return data;
}

template <typename T>
bool IsEmpty(const Stack<T>& stack)
{
    return !stack.data;
}

template <typename T>
size_t Size(const Stack<T>& stack)
{
    size_t tmp = NSize(stack.data);
    return tmp > stack.capacity ? stack.capacity : tmp;
}

template <typename T>
void Empty(Stack<T>& stack)
{
    FreeList(stack.data);
}