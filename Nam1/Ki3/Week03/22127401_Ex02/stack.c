#include "stack.h"

Stack* Stack_Init() {
    return List_Init();
}

bool Stack_IsEmpty(Stack* self) {
    return List_IsEmpty(self);
}

bool Stack_Push(Stack* self, int item) {
    return List_Push(self, item);
}

int Stack_Pop(Stack* self) {
    return List_Pop(self);
}

void Stack_Clear(Stack* self) {
    List_Clear(self);
}

void Stack_Destroy(Stack* self) {
    List_Destroy(self);
}
