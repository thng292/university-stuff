#include "heap.h"

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static inline Node* CreateNode(int data, Node* left, Node* right, Node* par)
{
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = left;
    node->right = right;
    node->par = par;
    return node;
}

Heap* Heap_Init(void)
{
    Heap* res = malloc(sizeof(Heap));
    res->head = NULL;
    res->size = 0;
    return res;
}

int Heap_Size(Heap* self) {
    return self->size;
}

Node* BruteRightMostNode(Node* node, int maxLevel, int currentLevel)
{
    if (currentLevel == maxLevel - 1) {
        if (node->right != NULL && node->left != NULL) {
            return NULL;
        }
        return node;
    }
    Node* left = BruteRightMostNode(node->left, maxLevel, currentLevel + 1);
    Node* right = BruteRightMostNode(node->right, maxLevel, currentLevel + 1);
    if (left != NULL) {
        return left;
    }
    return right;
}

void println(Node* node)
{
    if (node == NULL) {
        return;
    }
    printf(
        "%14p Data: %d Left: %14p Right: %14p Par: %14p\n",
        node,
        node->data,
        node->left,
        node->right,
        node->par
    );
    println(node->left);
    println(node->right);
}

static inline Node* GetRightMostNode(Heap* heap)
{
    double level = log2(heap->size);
    double tmp = log2(heap->size + 1);
    if (tmp == (int)tmp) {
        Node* res = heap->head;
        while (res->left) {
            res = res->left;
        }
        return res;
    }
    return BruteRightMostNode(heap->head, (int)level + 1, 1);
}

bool Heap_IsEmpty(Heap* self) { return self->size == 0; }

void Heap_BottomUp(Node* node)
{
    Node* par = node->par;
    while (par != NULL) {
        if (par->data > node->data) {
            int tmp = par->data;
            par->data = node->data;
            node->data = tmp;
            node = par;
            par = par->par;
        } else {
            break;
        }
    }
}

void Heap_Push(Heap* self, int item)
{
    if (self->head != NULL) {
        Node* rightMost = GetRightMostNode(self);
        // printf("\nRight Most: ");
        // println(rightMost);
        // printf("\n");
        Node* tmp = CreateNode(item, NULL, NULL, rightMost);
        if (rightMost->left == NULL) {
            rightMost->left = tmp;
        } else {
            rightMost->right = tmp;
        }
        Heap_BottomUp(tmp);
    } else {
        Node* node = CreateNode(item, NULL, NULL, NULL);
        self->head = node;
    }
    self->size++;
}

void Heap_TopDown(Heap* self)
{
    Node* par = self->head;
    while (1) {
        Node* min = par;
        if (par->right != NULL && par->right->data < min->data) {
            min = par->right;
        }
        if (par->left != NULL && par->left->data < min->data) {
            min = par->left;
        }
        if (min == par) {
            break;
        }
        int tmp = min->data;
        min->data = par->data;
        par->data = tmp;
        par = min;
    }
}

Node* BruteRightMostNodeToFree(Node* node, int maxLevel, int currentLevel)
{
    if (currentLevel == maxLevel - 1) {
        if (node->right == NULL && node->left == NULL) {
            return NULL;
        }
        return node;
    }
    Node* left =
        BruteRightMostNodeToFree(node->left, maxLevel, currentLevel + 1);
    Node* right =
        BruteRightMostNodeToFree(node->right, maxLevel, currentLevel + 1);
    if (right != NULL) {
        return right;
    }
    return left;
}

static inline Node* GetRightMostNodeToFree(Heap* heap)
{
    double level = log2(heap->size);
    double tmp = log2(heap->size + 1);
    if (tmp == (int)tmp) {
        Node* res = heap->head;
        while (res->left) {
            res = res->left;
        }
        return res;
    }
    return BruteRightMostNodeToFree(heap->head, (int)level + 1, 1);
}

int Heap_Pop(Heap* self)
{
    self->size--;
    int res = self->head->data;
    if (self->size == 0) {
        free(self->head);
        self->head = NULL;
        return res;
    }
    Node* rightMost = GetRightMostNodeToFree(self);
    // printf("Right Most Original: ");
    // println(rightMost);

    if (rightMost->right != NULL) {
        rightMost = rightMost->right;
    } else if (rightMost->left != NULL) {
        rightMost = rightMost->left;
    }
    // printf("Right Most:");
    // println(rightMost);
    self->head->data = rightMost->data;
    Node* tmp = rightMost->par;
    if (tmp->left == rightMost) {
        tmp->left = NULL;
    } else {
        tmp->right = NULL;
    }
    free(rightMost);
    // printf("Before Top Down\n");
    // println(self->head);
    Heap_TopDown(self);
    return res;
}

void FreeNodeRecursive(Node* node)
{
    if (node == NULL) {
        return;
    }
    FreeNodeRecursive(node->left);
    FreeNodeRecursive(node->right);
    free(node);
}

void Heap_Destroy(Heap* self)
{
    FreeNodeRecursive(self->head);
    free(self);
}
