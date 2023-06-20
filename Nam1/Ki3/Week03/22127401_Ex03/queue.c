#include "queue.h"

Queue* Queue_Init() {
    return List_Init();
}

bool Queue_IsEmpty(Queue* self) {
    return List_IsEmpty(self);
}

bool Queue_Push(Queue* self, int item) {
    return List_Push(self, item);
}

int Queue_Pop(Queue* self) {
    return List_PopFront(self);
}

void Queue_Clear(Queue* self) {
    List_Clear(self);
}

void Queue_Destroy(Queue* self) {
    List_Destroy(self);
}
