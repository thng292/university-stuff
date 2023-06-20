#include <stdio.h>
#include "queue.h"

int main(void) {
    int length = 100;
    Queue* queue = Queue_Init();
    for (int i = 0; i < length; i++) {
        Queue_Push(queue, i);
    }
    while (!Queue_IsEmpty(queue)) {
        printf("%d, ", Queue_Pop(queue));
    }
    Queue_Destroy(queue);
    return 0;
}

