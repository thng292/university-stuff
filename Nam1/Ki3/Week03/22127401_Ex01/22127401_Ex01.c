#include <stdio.h>
#include <stdlib.h>

#include "../list.h"

const int MIN = 10;
const int MAX = 100;

const int VAL_MAX = 50;
const int VAL_MIN = -50;

int Randd(int min, int max) { return rand() % (max - min) + min; }

int main(void)
{
    // int length = Randd(MIN, MAX);
    int length = 10;
    List* list = List_Init();
    int x = Randd(-10, 10);
    printf("%d\n", x);
    printf("Original: ");
    for (int i = 0; i < length; i++) {
        int tmp = Randd(VAL_MIN, VAL_MAX);
        List_Push(list, tmp);
        printf("%d, ", tmp);
    }
    printf("\n");
    List* list2 = Ex01Req(list, x);

    printf("list1: ");
    Node* iter = list->begin;
    while (iter != list->end->next) {
        printf("%d, ", iter->data);
        iter = iter->next;
    }
    printf("\n");

    printf("list2: ");
    iter = list2->begin;
    while (iter != list->end->next) {
        printf("%d, ", iter->data);
        iter = iter->next;
    }
    printf("\n");
    
    List_Clear(list);
    List_Clear(list2);
    
    List_Destroy(list);
    List_Destroy(list2);
    return 0;
}
