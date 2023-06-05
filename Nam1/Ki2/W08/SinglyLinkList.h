#pragma once
#include "FileHandle.h"

template <class T>
struct SinglyLinkList {
    T data;
    SinglyLinkList* next = nullptr;
};

template <class T>
void freeNode(SinglyLinkList<T>* node) {
    delete node;
}

template <class T>
void freeList(SinglyLinkList<T>* head) {
    while (head) {
        SinglyLinkList<T>* temp = head;
        head = head->next;
        freeNode(temp);
    }
}

template <class T>
void PushBack(SinglyLinkList<T>** phead, SinglyLinkList<T>* data) {
    if (*phead) {
        auto head = *phead;
        while (head->next) {
            head = head->next;
        }
        head->next = data;
    } else {
        *phead = data;
    }
}

template <class T>
void PushBack(SinglyLinkList<T>** phead, T data) {
    if (*phead) {
        auto head = *phead;
        while (head->next) {
            head = head->next;
        }
        auto node = new SinglyLinkList<T>;
        node->data = data;
        head->next = node;
    } else {
        *phead = new SinglyLinkList<T>;
        (*phead)->data = data;
    }
}

template <class T>
SinglyLinkList<T>*
ReadListFromFile(char* fileName) {
    std::ifstream inFile = OpenInFile(fileName);
    SinglyLinkList<T>* head = nullptr;
    SinglyLinkList<T>* tail = nullptr;
    if (!inFile.fail()) {
        while (!inFile.eof()) {
            T data;
            SinglyLinkList<T>* node = new SinglyLinkList<T>;
            inFile >> node->data;
            if (!head) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }
    }
    return head;
}

SinglyLinkList<int>* ReadListFromConsole() {
    SinglyLinkList<int>* head = nullptr;
    SinglyLinkList<int>* tail = nullptr;
    int n;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        PushBack(&tail, n);
        if (!head) {
            head = tail;
        } else {
            tail = tail->next;
        }
    }

    return head;
}

template <class T>
bool WriteListToFile(char* fileName, SinglyLinkList<T>* head) {
    std::ofstream outFile = OpenOutFile(fileName);
    if (!outFile.fail() && head) {
        do {
            outFile << head->data << '\n';
            head = head->next;
        } while (head);
    }
    return !outFile.fail();
}

template <class T>
void WriteListToConsole(SinglyLinkList<T>* head) {
    if (head) {
        do {
            std::cout << head->data << ' ';
            head = head->next;
        } while (head);
        std::cout << std::endl;
    }
}

template <class T, class U>
void deleteNodes(SinglyLinkList<T>** phead, U Pred) {
    if (!phead || !*phead) {
        return;
    }
    auto head = *phead;
    SinglyLinkList<T>* prev = nullptr;
    while (head) {
        if (Pred(head->data)) {
            if (prev) {
                prev->next = head->next;
                freeNode(head);
                head = prev->next;
            } else {
                *phead = head->next;
                freeNode(head);
                head = *phead;
            }
        } else {
            prev = head;
            head = head->next;
        }
    }
    freeNode(head);
}

template <class T>
void deleteNodes(SinglyLinkList<T>** node, T data) {
    deleteNodes(node, [&data](T x) { return x == data; });
}

template <class T>
void insertAfter(SinglyLinkList<T>* node, T data) {
    auto newNode = new SinglyLinkList<T>;
    newNode->data = data;
    newNode->next = node->next;
    node->next = newNode;
}

template <class T>
T Pop(SinglyLinkList<T>* head) {
    while (head->next->next) {
        head = head->next;
    }
    T res = head->next->data;
    freeNode(head->next);
    head->next = nullptr;
    return res;
}

template <class T>
SinglyLinkList<T>* ListOfSum(SinglyLinkList<T>* head, T initValue) {
    SinglyLinkList<T>* result = nullptr;
    SinglyLinkList<T>* tail = nullptr;
    while (head) {
        auto node = new SinglyLinkList<T>;
        node->data = initValue + head->data;
        if (!result) {
            result = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
        head = head->next;
    }
    return result;
}

template <class T>
void JoinList(SinglyLinkList<T>* head1, SinglyLinkList<T>* head2) {
    while (head1->next) {
        head1 = head1->next;
    }
    head1->next = head2;
}

template <class T>
uint64_t List2Int(SinglyLinkList<T>* head) {
    uint64_t result = 0;
    while (head) {
        if (head->data >= 0) {
            result = result * 10 + head->data;
        }
        head = head->next;
    }
    return result;
}

SinglyLinkList<int>* NumberToList(uint64_t number) {
    SinglyLinkList<int>* head = nullptr;
    while (number) {
        auto node = new SinglyLinkList<int>;
        node->data = number % 10;
        if (head) {
            node->next = head;
            head = node;
        } else {
            head = node;
        }
        number /= 10;
    }
    return head;
}

template <class T, class U>
T* FindInList(SinglyLinkList<T>* head, U Pred) {
    while (head) {
        if (Pred(head->data)) {
            return &head->data;
        }
        head = head->next;
    }
    return nullptr;
}

template <class T>
T* FindInList(SinglyLinkList<T>* head, T data) {
    return FindInList(head, [&data](T x) { return x == data; });
}

template <class T>
void removeDup(SinglyLinkList<T>* head) {
    while (head) {
        auto node = head;
        while (node->next) {
            if (node->next->data == head->data) {
                auto temp = node->next;
                node->next = node->next->next;
                freeNode(temp);
            } else {
                node = node->next;
            }
        }
        head = head->next;
    }
}

template <class T>
void reverseList(SinglyLinkList<T>** phead) {
    if (!phead || !*phead) {
        return;
    }
    auto head = *phead;
    SinglyLinkList<T>* newHead = nullptr;
    while (head) {
        auto temp = head->next;
        head->next = newHead;
        newHead = head;
        head = temp;
    }
    *phead = newHead;
}

void insertEvenNumbers(SinglyLinkList<int>** phead) {
    if (!phead || !*phead) {
        return;
    }
    auto head = *phead;
    SinglyLinkList<int>* res = nullptr;
    int i = 2;
    while (head) {
        PushBack(&res, i);
        i += 2;
        PushBack(&res, head->data);
        head = head->next;
    }
    freeList(*phead);
    *phead = res;
}

template <class T>
SinglyLinkList<T>* SplitList(SinglyLinkList<T>* head) {
    SinglyLinkList<T>* res = nullptr;
    SinglyLinkList<T>* nhead = nullptr;
    nhead = head->next;
    res = nhead;
    while (head) {
        head->next = nhead->next;
        head = head->next;
        if (head) {
            nhead->next = head->next;
            nhead = nhead->next;
        }
    }
    return res;
}

template <class T>
void MergeList(SinglyLinkList<T>* head1, SinglyLinkList<T>* head2) {
    auto ohead2 = head2;
    while (head1 && head2) {
        auto tmp = head1->next;
        head1->next = head2;
        ohead2 = head2->next;
        head1 = head1->next;
        head1->next = tmp;
        head2 = ohead2;
        head1 = head1->next;
    }
}

template <class T>
SinglyLinkList<T>* search(SinglyLinkList<T>* head, T data) {
    while (head) {
        if (head->data == data) {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}

template <class T>
SinglyLinkList<T>* end(SinglyLinkList<T>* head) {
    while (head->next) {
        head = head->next;
    }
    return head;
}