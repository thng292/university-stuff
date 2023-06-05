#pragma once

template<class T>
struct SinglyLinkedList {
    T data;
    SinglyLinkedList* next = nullptr;
};

template<class T>
struct List {
    SinglyLinkedList<T>* head = nullptr;
    SinglyLinkedList<T>* tail = nullptr;
    bool(*OrderingFunc)(T, T);
};

template<class T>
void PrintList(List<T>& list) {
    auto node = list.head;
    while (node) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

template<class T>
void freeNode(SinglyLinkedList<T>* node) {
    delete node;
}

template<class T>
static void insertAfterNode(SinglyLinkedList<T>* node, T data) {
    auto newNode = new SinglyLinkedList<T>;
    newNode->data = data;
    newNode->next = node->next;
    node->next = newNode;
}

// OrderingFunc(a, b)
// Return true if a and b follow the order

template<class T>
void insertOrdered(List<T>& list, T data) {
    if (!list.head) {
        auto tmp = new SinglyLinkedList<T>;
        tmp->data = data;
        list.head = tmp;
        list.tail = tmp;
    }
    if ((*list.OrderingFunc)(list.tail->data, data)) {
        auto newNode = new SinglyLinkedList<T>;
        newNode->data = data;
        list.tail->next = newNode;
        list.tail = newNode;
        return;
    }
    auto head = list.head;
    SinglyLinkedList<T>* prev = nullptr;
    while (head->next) {
        if (!(*list.OrderingFunc)(head->data, data)) {
            if (prev) {
                insertAfterNode(prev, data);
            } else {
                auto newNode = new SinglyLinkedList<T>;
                newNode->data = data;
                newNode->next = list.head;
                list.head = newNode;
            }
        } else {
            prev = head;
            head = head->next;
        }
    }
}

template<class T>
void FreeList(List<T>& list) {
    auto head = list.head;
    while (head) {
        auto next = head->next;
        freeNode(head);
        head = next;
    }
}