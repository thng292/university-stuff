#ifndef QUEUE_H_
#define QUEUE_H_

#include "../list.h"

typedef List Queue;

Queue* Queue_Init(void);

bool Queue_IsEmpty(Queue* self);

bool Queue_Push(Queue* self, int item);

int Queue_Pop(Queue* self);

void Queue_Clear(Queue* self);

void Queue_Destroy(Queue* self);

#endif
