#include <iostream>

#include "../SinglyLinkList.h"

int main() {
    SinglyLinkList<int>* head1 = ReadListFromConsole();
    SinglyLinkList<int>* head2 = ReadListFromConsole();

    MergeList(head1, head2);
    PushBack(&head1, 0);

    std::cout << "List: ";
    WriteListToConsole(head1);
    freeList(head1);

}