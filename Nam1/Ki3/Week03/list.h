#ifndef LIST_H_
#define LIST_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* begin;
    Node* end;
} List;

List* List_Init(void);

bool List_IsEmpty(List* self);

bool List_Push(List* self, int item);

int List_Pop(List* self);

int List_PopFront(List* self);

void List_Clear(List* self);

List* Ex01Req(List* self, int thresold);

void List_Destroy(List* self);

#ifdef __cplusplus
}
#endif

#endif
