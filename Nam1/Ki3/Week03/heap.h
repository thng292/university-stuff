#ifndef HEAP_H_
#define HEAP_H_

#include <stdbool.h>

typedef struct Node {
    struct Node* left;
    struct Node* right;
    struct Node* par;
    int data;
} Node;

typedef struct {
    Node* head;
    unsigned long long size;
} Heap;

Heap* Heap_Init(void);

bool Heap_IsEmpty(Heap* self);

void Heap_Push(Heap* self, int item);

int Heap_Pop(Heap* self);

void Heap_Destroy(Heap* self);

int Heap_Size(Heap* self);

#endif
