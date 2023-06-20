#ifndef STACK_H_
#define STACK_H_


#include "../list.h"

typedef List Stack;

Stack* Stack_Init(void);

bool Stack_IsEmpty(Stack* self);

bool Stack_Push(Stack* self, int item);

int Stack_Pop(Stack* self);

void Stack_Clear(Stack* self);

void Stack_Destroy(Stack* self);

#endif
