#include "list.h"

#include <stdlib.h>

static inline Node* CreateNode(Node* next, int data)
{
    Node* res = malloc(sizeof(Node));
    if (res == NULL) {
        return NULL;
    }
    res->data = data;
    res->next = next;
    return res;
}

List* List_Init()
{
    List* res = malloc(sizeof(List));
    res->begin = NULL;
    res->end = NULL;
    return res;
}

bool List_IsEmpty(List* self) { return self->begin == NULL; }

bool List_Push(List* self, int item)
{
    Node* node = CreateNode(NULL, item);
    if (node == NULL) {
        return false;
    }
    if (self->begin == NULL) {
        self->begin = self->end = node;
    } else {
        self->end->next = node;
        self->end = node;
    }
    return true;
}

int List_Pop(List* self)
{
    int res = self->end->data;
    Node* iter = self->begin;
    Node* bf = NULL;
    if (self->begin == self->end) {
        self->begin = self->end = NULL;
    } else {
        while (iter != self->end) {
            bf = iter;
            iter = iter->next;
        }
    }
    free(iter);
    self->end = bf;
    return res;
}

int List_PopFront(List* self)
{
    int res = self->begin->data;
    Node* tmp = self->begin;
    if (self->begin == self->end) {
        self->begin = self->end = NULL;
    } else {
        self->begin = tmp->next;
    }
    free(tmp);
    return res;
}

void List_Clear(List* self)
{
    Node* iter;
    while (self->begin != self->end) {
        iter = self->begin;
        self->begin = self->begin->next;
        free(iter);
    }
    self->begin = NULL;
    self->end = NULL;
}

void List_Destroy(List* self)
{
    List_Clear(self);
    free(self);
}

List* Ex01Req(List* self, int thresold)
{
    Node* iter = self->begin;
    List* res1 = List_Init();
    List* res2 = List_Init();
    // self: < thresold
    while (!List_IsEmpty(self)) {
        if (self->begin->data < thresold) {
            if (res1->begin == NULL) {
                res1->begin = res1->end = self->begin;
            } else {
                res1->end->next = self->begin;
                res1->end = self->begin;
            }
        } else {
            if (res2->begin == NULL) {
                res2->begin = res2->end = self->begin;
            } else {
                res2->end->next = self->begin;
                res2->end = self->begin;
            }
        }
        self->begin = self->begin->next;
    }
    self->begin = res1->begin;
    self->end = res1->end;
    return res2;
}
